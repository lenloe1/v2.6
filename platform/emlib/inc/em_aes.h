/***************************************************************************//**
 * @file
 * @brief Advanced encryption standard (AES) accelerator peripheral API.
 * @version 5.8.1
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

#ifndef EM_AES_H
#define EM_AES_H

#include "em_device.h"
#if defined(AES_COUNT) && (AES_COUNT > 0)

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/***************************************************************************//**
 * @addtogroup emlib
 * @{
 ******************************************************************************/

/***************************************************************************//**
 * @addtogroup AES
 * @brief Advanced Encryption Standard Accelerator (AES) Peripheral API.
 *
 * @details
 *   The AES peripheral supports AES block cipher encryption and decryption with
 *   128 bit and 256 bit keys. The following block cipher modes are supported:
 *   @li CBC - Cipher Block Chaining mode
 *   @li CFB - Cipher Feedback mode
 *   @li CTR - Counter mode
 *   @li ECB - Electronic Code Book mode
 *   @li OFB - Output Feedback mode
 *
 *   The following input/output notations should be noted:
 *
 *   @li Input/output data (plaintext, ciphertext, key, and so on) are treated as
 *     byte arrays, starting with the most significant byte, i.e., 32 bytes of
 *     plaintext (B0...B31) is located in memory in the same order, with B0 at
 *     the lower address and B31 at the higher address.
 *
 *   @li Byte arrays must always be a multiple of AES block size, i.e., a multiple
 *     of 16. Padding, if required, is done at the end of the byte array.
 *
 *   @li Byte arrays should be word (32 bit) aligned for performance
 *     considerations, since the array is accessed with a 32 bit access type.
 *     Cortex-M supports unaligned accesses with a performance penalty.
 *
 *   @li It is possible to specify the same output buffer as an input buffer
 *     as long as they point to the same address. In that case, the provided input
 *     buffer is replaced with the encrypted/decrypted output. Notice that
 *     buffers must be exactly overlapping. If partly overlapping, the
 *     behavior is undefined.
 *
 *   Use a cipher mode according to its requirements to avoid
 *   breaking security. See a specific cipher mode
 *   theory for details.
 *
 *   References:
 *   @li Wikipedia - Cipher modes, http://en.wikipedia.org/wiki/Cipher_modes
 *
 *   @li Recommendation for Block Cipher Modes of Operation,
 *      NIST Special Publication 800-38A, 2001 Edition,
 *      http://csrc.nist.gov/publications/nistpubs/800-38a/sp800-38a.pdf
 *
 *  The following example shows how to perform an AES-128 CBC encryption:
 *
 *  Enable clocks:
 *  @include em_aes_clock_enable.c
 *
 *  Execute AES-128 CBC encryption:
 *  @include em_aes_basic_usage.c
 *
 * @{
 ******************************************************************************/

/*******************************************************************************
 ******************************   TYPEDEFS   ***********************************
 ******************************************************************************/

/**
 * @brief
 *   An AES counter modification function pointer.
 * @details
 *   Parameters:
 *   @li ctr - Ptr to byte array (16 bytes) holding a counter to be modified.
 */
typedef void (*AES_CtrFuncPtr_TypeDef)(uint8_t *ctr);

/*******************************************************************************
 *****************************   PROTOTYPES   **********************************
 ******************************************************************************/

void AES_CBC128(uint8_t *out,
                const uint8_t *in,
                unsigned int len,
                const uint8_t *key,
                const uint8_t *iv,
                bool encrypt);

#if defined(AES_CTRL_AES256)
void AES_CBC256(uint8_t *out,
                const uint8_t *in,
                unsigned int len,
                const uint8_t *key,
                const uint8_t *iv,
                bool encrypt);
#endif

void AES_CFB128(uint8_t *out,
                const uint8_t *in,
                unsigned int len,
                const uint8_t *key,
                const uint8_t *iv,
                bool encrypt);

#if defined(AES_CTRL_AES256)
void AES_CFB256(uint8_t *out,
                const uint8_t *in,
                unsigned int len,
                const uint8_t *key,
                const uint8_t *iv,
                bool encrypt);
#endif

void AES_CTR128(uint8_t *out,
                const uint8_t *in,
                unsigned int len,
                const uint8_t *key,
                uint8_t *ctr,
                AES_CtrFuncPtr_TypeDef ctrFunc);

#if defined(AES_CTRL_AES256)
void AES_CTR256(uint8_t *out,
                const uint8_t *in,
                unsigned int len,
                const uint8_t *key,
                uint8_t *ctr,
                AES_CtrFuncPtr_TypeDef ctrFunc);
#endif

void AES_CTRUpdate32Bit(uint8_t *ctr);

void AES_DecryptKey128(uint8_t *out, const uint8_t *in);

#if defined(AES_CTRL_AES256)
void AES_DecryptKey256(uint8_t *out, const uint8_t *in);
#endif

void AES_ECB128(uint8_t *out,
                const uint8_t *in,
                unsigned int len,
                const uint8_t *key,
                bool encrypt);

#if defined(AES_CTRL_AES256)
void AES_ECB256(uint8_t *out,
                const uint8_t *in,
                unsigned int len,
                const uint8_t *key,
                bool encrypt);
#endif

/***************************************************************************//**
 * @brief
 *   Clear one or more pending AES interrupts.
 *
 * @param[in] flags
 *   A pending AES interrupt source to clear. Use a bitwise logic OR combination of
 *   valid interrupt flags for the AES module (AES_IF_nnn).
 ******************************************************************************/
__STATIC_INLINE void AES_IntClear(uint32_t flags)
{
  AES->IFC = flags;
}

/***************************************************************************//**
 * @brief
 *   Disable one or more AES interrupts.
 *
 * @param[in] flags
 *   An AES interrupt sources to disable. Use a bitwise logic OR combination of
 *   valid interrupt flags for the AES module (AES_IF_nnn).
 ******************************************************************************/
__STATIC_INLINE void AES_IntDisable(uint32_t flags)
{
  AES->IEN &= ~(flags);
}

/***************************************************************************//**
 * @brief
 *   Enable one or more AES interrupts.
 *
 * @note
 *   Depending on use, a pending interrupt may already be set prior to
 *   enabling the interrupt. Consider using AES_IntClear() prior to enabling
 *   if a pending interrupt should be ignored.
 *
 * @param[in] flags
 *   AES interrupt sources to enable. Use a bitwise logic OR combination of
 *   valid interrupt flags for the AES module (AES_IF_nnn).
 ******************************************************************************/
__STATIC_INLINE void AES_IntEnable(uint32_t flags)
{
  AES->IEN |= flags;
}

/***************************************************************************//**
 * @brief
 *   Get pending AES interrupt flags.
 *
 * @note
 *   This function does not clear event bits.
 *
 * @return
 *   AES interrupt sources pending. A bitwise logic OR combination of valid
 *   interrupt flags for the AES module (AES_IF_nnn).
 ******************************************************************************/
__STATIC_INLINE uint32_t AES_IntGet(void)
{
  return AES->IF;
}

/***************************************************************************//**
 * @brief
 *   Get enabled and pending AES interrupt flags.
 *   Useful for handling more interrupt sources in the same interrupt handler.
 *
 * @note
 *   This function does not clear interrupt flags.
 *
 * @return
 *   Pending and enabled AES interrupt sources.
 *   The return value is the bitwise AND of
 *   - the enabled interrupt sources in AES_IEN and
 *   - the pending interrupt flags AES_IF
 ******************************************************************************/
__STATIC_INLINE uint32_t AES_IntGetEnabled(void)
{
  uint32_t ien;

  ien = AES->IEN;
  return AES->IF & ien;
}

/***************************************************************************//**
 * @brief
 *   Set one or more pending AES interrupts from software.
 *
 * @param[in] flags
 *   AES interrupt sources to set as pending. Use a bitwise logic OR combination
 *   of valid interrupt flags for the AES module (AES_IF_nnn).
 ******************************************************************************/
__STATIC_INLINE void AES_IntSet(uint32_t flags)
{
  AES->IFS = flags;
}

void AES_OFB128(uint8_t *out,
                const uint8_t *in,
                unsigned int len,
                const uint8_t *key,
                const uint8_t *iv);

#if defined(AES_CTRL_AES256)
void AES_OFB256(uint8_t *out,
                const uint8_t *in,
                unsigned int len,
                const uint8_t *key,
                const uint8_t *iv);
#endif

/** @} (end addtogroup AES) */
/** @} (end addtogroup emlib) */

#ifdef __cplusplus
}
#endif

#endif /* defined(AES_COUNT) && (AES_COUNT > 0) */
#endif /* EM_AES_H */
