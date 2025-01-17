/***************************************************************************//**
 * @file
 * @brief Common Lib Mem Example
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc.  Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement.  This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE
 ********************************************************************************************************
 *******************************************************************************************************/

#ifndef  _EX_COMMON_LIB_MEM_H_
#define  _EX_COMMON_LIB_MEM_H_

/********************************************************************************************************
 ********************************************************************************************************
 *                                         FUNCTION PROTOTYPES
 ********************************************************************************************************
 *******************************************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

void Ex_CommonLibMemSeg(void);

void Ex_CommonLibMemSegCreate(void);

void Ex_CommonLibMemDynPool(void);

void Ex_CommonLibMemDynPoolGetFree(void);

void Ex_CommonLibMemMemGetFree(void);

void Ex_CommonLibMemDynPoolPersistent(void);

void Ex_CommonLibMemDynPoolHW(void);

void Ex_CommonLibMemSegCompile(void);

void Ex_CommonLibMemDynPoolRealloc(void);

void Ex_CommonLibMemSegInfo(void);

#ifdef __cplusplus
}
#endif
#endif
