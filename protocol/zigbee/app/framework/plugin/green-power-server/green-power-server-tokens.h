/***************************************************************************//**
 * @file
 * @brief Token defines for the Green Power Server plugin.
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

/**
 * Custom Application Tokens
 */
#ifdef EMBER_AF_PLUGIN_GREEN_POWER_SERVER_USE_TOKENS

#define CREATOR_TRANSLATION_TABLE     (0x8729)
#define CREATOR_CUSTOMIZED_TABLE      (0x872A)
#define CREATOR_ADDITIONALINFO_TABLE  (0x872B)
#define CREATOR_ADDITIONALINFO_TABLE_VALID_ENTRIES  (0x872C)
#define CREATOR_TRANSLATION_TABLE_TOTAL_ENTRIES     (0x872D)
#define CREATOR_ADDITIONALINFO_TABLE_TOTAL_ENTRIES  (0x872E)
#define CREATOR_GPS_NETWORK_STATE      (0x872F)
// This key is used for an indexed token and the subsequent 0x7F keys are also reserved
#define NVM3KEY_TRANSLATION_TABLE    (NVM3KEY_DOMAIN_ZIGBEE | 0x8729)
#define NVM3KEY_CUSTOMIZED_TABLE     (NVM3KEY_DOMAIN_ZIGBEE | 0x872A)
#define NVM3KEY_ADDITIONALINFO_TABLE (NVM3KEY_DOMAIN_ZIGBEE | 0x872B)
#define NVM3KEY_ADDITIONALINFO_TABLE_VALID_ENTRIES (NVM3KEY_DOMAIN_ZIGBEE | 0x872C)
#define NVM3KEY_TRANSLATION_TABLE_TOTAL_ENTRIES (NVM3KEY_DOMAIN_ZIGBEE | 0x872D)
#define NVM3KEY_ADDITIONALINFO_TABLE_TOTAL_ENTRIES (NVM3KEY_DOMAIN_ZIGBEE | 0x872E)
#define NVM3KEY_GPS_NETWORK_STATE      (NVM3KEY_DOMAIN_ZIGBEE | 0x872F)

#ifdef DEFINETYPES
// Include or define any typedef for tokens here
#include "green-power-server.h"
#endif //DEFINETYPES

#ifdef DEFINETOKENS
// Define the actual token storage information here

// Following is for backward compatibility.
// The default reporting will generate a table that is mandatory
// but user may still allocate some table for adding more reporting over
// the air or by cli as part of reporting plugin.

#ifndef EMBER_AF_PLUGIN_GREEN_POWER_SERVER_CUSTOMIZED_GPD_TRANSLATION_TABLE_SIZE
#define EMBER_AF_PLUGIN_GREEN_POWER_SERVER_CUSTOMIZED_GPD_TRANSLATION_TABLE_SIZE (20)
#endif

#ifndef EMBER_AF_PLUGIN_GREEN_POWER_SERVER_TRANSLATION_TABLE_SIZE
#define EMBER_AF_PLUGIN_GREEN_POWER_SERVER_TRANSLATION_TABLE_SIZE 30
#endif

#define EMBER_AF_PLUGIN_GREEN_POWER_SERVER_ADDITIONALINFO_TABLE_SIZE EMBER_AF_PLUGIN_GREEN_POWER_SERVER_TRANSLATION_TABLE_SIZE

DEFINE_INDEXED_TOKEN(TRANSLATION_TABLE,
                     EmGpCommandTranslationTableEntry,
                     EMBER_AF_PLUGIN_GREEN_POWER_SERVER_TRANSLATION_TABLE_SIZE,
                     { 0x00, 0x00, 0x00, 0x00, 0x00, { 0x00000000 }, 0x00, 0x00 })
DEFINE_BASIC_TOKEN(TRANSLATION_TABLE_TOTAL_ENTRIES, uint8_t, 0x00)
DEFINE_INDEXED_TOKEN(CUSTOMIZED_TABLE,
                     EmberAfGreenPowerServerGpdSubTranslationTableEntry,
                     EMBER_AF_PLUGIN_GREEN_POWER_SERVER_CUSTOMIZED_GPD_TRANSLATION_TABLE_SIZE,
                     { 0x00, 0x00, 0x00, 0x0000, 0x0000, 0x00, 0x00, 0x00, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } })
DEFINE_INDEXED_TOKEN(ADDITIONALINFO_TABLE,
                     EmberGpTranslationTableAdditionalInfoBlockOptionRecordField,
                     EMBER_AF_PLUGIN_GREEN_POWER_SERVER_ADDITIONALINFO_TABLE_SIZE,
                     { 0x00, 0x00, { 0x00, 0x00, 0x0000, 0x0000, 0x00, 0x00, 0x0000 } })
DEFINE_INDEXED_TOKEN(ADDITIONALINFO_TABLE_VALID_ENTRIES,
                     uint8_t,
                     EMBER_AF_PLUGIN_GREEN_POWER_SERVER_ADDITIONALINFO_TABLE_SIZE,
                     { 0x00 })
DEFINE_BASIC_TOKEN(ADDITIONALINFO_TABLE_TOTAL_ENTRIES, uint8_t, 0x00)
DEFINE_BASIC_TOKEN(GPS_NETWORK_STATE, uint8_t, 0x00)
#endif //DEFINETOKENS
#endif //EMBER_AF_PLUGIN_GREEN_POWER_SERVER_USE_TOKENS
