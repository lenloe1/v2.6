/***************************************************************************//**
 * @file
 * @brief Host specific code for fragmentation.
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

#include "app/framework/include/af.h"
#include "app/framework/util/af-main.h"
#include "app/framework/plugin/concentrator/source-route-host.h"
#ifdef EMBER_AF_PLUGIN_ADDRESS_TABLE
#include "app/framework/plugin/address-table/address-table.h"
#endif
#include "fragmentation.h"

//-----------------------------------------------------------------------------
// Globals

uint16_t emberMacIndirectTimeout = 0;
uint16_t emberApsAckTimeoutMs    = 0;
uint8_t  emberFragmentWindowSize = EMBER_AF_PLUGIN_FRAGMENTATION_RX_WINDOW_SIZE;

//-----------------------------------------------------------------------------
// Functions

void emberAfPluginFragmentationNcpInitCallback(void)
{
  ezspGetConfigurationValue(EZSP_CONFIG_INDIRECT_TRANSMISSION_TIMEOUT,
                            &emberMacIndirectTimeout);
  ezspGetConfigurationValue(EZSP_CONFIG_APS_ACK_TIMEOUT, &emberApsAckTimeoutMs);
  emberAfSetEzspConfigValue(EZSP_CONFIG_FRAGMENT_WINDOW_SIZE,
                            emberFragmentWindowSize,
                            "Fragmentation RX window size");
}

void emAfPluginFragmentationPlatformInitCallback(void)
{
}

EmberStatus emAfPluginFragmentationSend(txFragmentedPacket* txPacket,
                                        uint8_t fragmentNumber,
                                        uint16_t fragmentLen,
                                        uint16_t offset)
{
  EmberStatus status;

#ifdef EZSP_APPLICATION_HAS_ROUTE_RECORD_HANDLER
  if (txPacket->sourceRoute) {
    EmberNodeId destination;
    if ( txPacket->messageType == EMBER_OUTGOING_VIA_BINDING) {
      destination = emberGetBindingRemoteNodeId(txPacket->indexOrDestination);
    } else if (txPacket->messageType == EMBER_OUTGOING_VIA_ADDRESS_TABLE) {
      destination = emberAfPluginAddressTableLookupNodeIdByIndex(txPacket->indexOrDestination);
    } else {
      destination = txPacket->indexOrDestination;
    }

    status = ezspSetSourceRoute(destination,
                                txPacket->relayCount,
                                txPacket->relayList);
    if (status != EMBER_SUCCESS) {
      return status;
    }
  }
#endif //EZSP_APPLICATION_HAS_ROUTE_RECORD_HANDLER

  status = ezspSendUnicast(txPacket->messageType,
                           txPacket->indexOrDestination,
                           &(txPacket->apsFrame),
                           fragmentNumber,
                           fragmentLen,
                           txPacket->bufferPtr + offset,
                           &(txPacket->apsFrame.sequence));
  return status;
}

void emAfPluginFragmentationHandleSourceRoute(txFragmentedPacket* txPacket,
                                              uint16_t indexOrDestination)
{
#if defined(EZSP_APPLICATION_HAS_ROUTE_RECORD_HANDLER)
  txPacket->sourceRoute = emberFindSourceRoute(indexOrDestination,
                                               &txPacket->relayCount,
                                               txPacket->relayList);
#endif
}

void emAfPluginFragmentationSendReply(EmberNodeId sender,
                                      EmberApsFrame* apsFrame,
                                      rxFragmentedPacket* rxPacket)
{
  apsFrame->groupId = HIGH_LOW_TO_INT(rxPacket->fragmentMask, rxPacket->fragmentBase);
  ezspSendReply(sender, apsFrame, 0, NULL);
}
