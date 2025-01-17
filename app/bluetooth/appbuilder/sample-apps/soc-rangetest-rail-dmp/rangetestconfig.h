/***************************************************************************//**
 * @file
 * @brief Prototype definitions for Range Test application and radio
 * configuration structs.
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

#ifndef RANGETESTSTATICCONFIG_H_
#define RANGETESTSTATICCONFIG_H_

// ----------------------------------------------------------------------------
// Defines

// Time spacing between two packets in 10ms units
#define RANGETEST_TX_PERIOD       10

// ----------------------------------------------------------------------------
// Types

// Range Test configuration parameters
typedef struct rangeTestStaticConfig{
  uint32_t radioXTALFreq;
  char     radioDataRate[20u];
  char     radioModulation[20u];
  char     radioDeviation[20u];
  char     radioOutputPower[20u];
  char     rssiMinValue[5u];
  char     rssiMidValue[5u];
  char     rssiMaxValue[5u];
} rangeTestStaticConfig_t;

extern char rangeTestPhys[10][10];

void initRangeTestPhys(uint8_t phyCnt);

#endif /* RANGETESTSTATICCONFIG_H_ */
