/**************************************************************************//**
* @file
* @brief em359x_usb Register and Bit Field definitions
* @version 5.8.1
******************************************************************************
* @section License
* <b>(C) Copyright 2014 Silicon Labs, www.silabs.com</b>
*******************************************************************************
*
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it
* freely, subject to the following restrictions:
*
* 1. The origin of this software must not be misrepresented; you must not
*    claim that you wrote the original software.
* 2. Altered source versions must be plainly marked as such, and must not be
*    misrepresented as being the original software.
* 3. This notice may not be removed or altered from any source distribution.
*
* DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Labs has no
* obligation to support this Software. Silicon Labs is providing the
* Software "AS IS", with no express or implied warranties of any kind,
* including, but not limited to, any implied warranties of merchantability
* or fitness for any particular purpose or warranties against infringement
* of any proprietary rights of a third party.
*
* Silicon Labs will not be liable for any consequential, incidental, or
* special damages, or any other relief, or for any claim by any third party,
* arising from your use of this Software.
*
******************************************************************************/

#ifndef EM359X_USB_H
#define EM359X_USB_H

/**************************************************************************//**
 * @defgroup EM359X_USB
 * @{
 * @brief EM359X_USB Register Declaration
 *****************************************************************************/

typedef struct {
  __IOM uint32_t BUFBASEA;
  __IOM uint32_t BUFBASEB;
  __IOM uint32_t TXLOAD;
  __IM uint32_t TXACTIVE;
  __IOM uint32_t TXBUFSIZEEPA[7];
  __IOM uint32_t TXBUFSIZEEPB[7];
  __IOM uint32_t RXVALID;
  __IOM uint32_t ENABLEIN;
  __IOM uint32_t ENABLEOUT;
  __IOM uint32_t STALLIN;
  __IOM uint32_t STALLOUT;
  __IOM uint32_t CTRL;
  __OM uint32_t PIPECLR;
  __OM uint32_t BUFCLR;
  __OM uint32_t RESUME;
  __IM uint32_t STATUS;
  __IM uint32_t STATUS2;
  __IOM uint32_t INTF1SEL;
  __IM uint32_t RXBUFSIZEEPA[7];
  __IM uint32_t RXBUFSIZEEPB[7];
} USB_TypeDef;              /** @} */

/**************************************************************************//**
 * @defgroup EM359X_USB_BitFields
 * @{
 *****************************************************************************/

/* Bit fields for USB BUFBASEA */
#define _USB_BUFBASEA_RESETVALUE          0x20000000UL
#define _USB_BUFBASEA_MASK                0xFFFFFFFFUL
#define _USB_BUFBASEA_BUFBASEA_SHIFT      0
#define _USB_BUFBASEA_BUFBASEA_MASK       0xFFFFFFFFUL
#define _USB_BUFBASEA_BUFBASEA_DEFAULT    0x20000000UL
#define USB_BUFBASEA_BUFBASEA_DEFAULT     (_USB_BUFBASEA_BUFBASEA_DEFAULT << 0)

/* Bit fields for USB BUFBASEB */
#define _USB_BUFBASEB_RESETVALUE          0x20000000UL
#define _USB_BUFBASEB_MASK                0xFFFFFFFFUL
#define _USB_BUFBASEB_BUFBASEB_SHIFT      0
#define _USB_BUFBASEB_BUFBASEB_MASK       0xFFFFFFFFUL
#define _USB_BUFBASEB_BUFBASEB_DEFAULT    0x20000000UL
#define USB_BUFBASEB_BUFBASEB_DEFAULT     (_USB_BUFBASEB_BUFBASEB_DEFAULT << 0)

/* Bit fields for USB TXLOAD */
#define _USB_TXLOAD_RESETVALUE            0x00000000UL
#define _USB_TXLOAD_MASK                  0x00007F7FUL
#define USB_TXLOAD_TXLOADEP6B             (0x1UL << 14)
#define _USB_TXLOAD_TXLOADEP6B_SHIFT      14
#define _USB_TXLOAD_TXLOADEP6B_MASK       0x4000UL
#define _USB_TXLOAD_TXLOADEP6B_DEFAULT    0x00000000UL
#define USB_TXLOAD_TXLOADEP6B_DEFAULT     (_USB_TXLOAD_TXLOADEP6B_DEFAULT << 14)
#define USB_TXLOAD_TXLOADEP5B             (0x1UL << 13)
#define _USB_TXLOAD_TXLOADEP5B_SHIFT      13
#define _USB_TXLOAD_TXLOADEP5B_MASK       0x2000UL
#define _USB_TXLOAD_TXLOADEP5B_DEFAULT    0x00000000UL
#define USB_TXLOAD_TXLOADEP5B_DEFAULT     (_USB_TXLOAD_TXLOADEP5B_DEFAULT << 13)
#define USB_TXLOAD_TXLOADEP4B             (0x1UL << 12)
#define _USB_TXLOAD_TXLOADEP4B_SHIFT      12
#define _USB_TXLOAD_TXLOADEP4B_MASK       0x1000UL
#define _USB_TXLOAD_TXLOADEP4B_DEFAULT    0x00000000UL
#define USB_TXLOAD_TXLOADEP4B_DEFAULT     (_USB_TXLOAD_TXLOADEP4B_DEFAULT << 12)
#define USB_TXLOAD_TXLOADEP3B             (0x1UL << 11)
#define _USB_TXLOAD_TXLOADEP3B_SHIFT      11
#define _USB_TXLOAD_TXLOADEP3B_MASK       0x800UL
#define _USB_TXLOAD_TXLOADEP3B_DEFAULT    0x00000000UL
#define USB_TXLOAD_TXLOADEP3B_DEFAULT     (_USB_TXLOAD_TXLOADEP3B_DEFAULT << 11)
#define USB_TXLOAD_TXLOADEP2B             (0x1UL << 10)
#define _USB_TXLOAD_TXLOADEP2B_SHIFT      10
#define _USB_TXLOAD_TXLOADEP2B_MASK       0x400UL
#define _USB_TXLOAD_TXLOADEP2B_DEFAULT    0x00000000UL
#define USB_TXLOAD_TXLOADEP2B_DEFAULT     (_USB_TXLOAD_TXLOADEP2B_DEFAULT << 10)
#define USB_TXLOAD_TXLOADEP1B             (0x1UL << 9)
#define _USB_TXLOAD_TXLOADEP1B_SHIFT      9
#define _USB_TXLOAD_TXLOADEP1B_MASK       0x200UL
#define _USB_TXLOAD_TXLOADEP1B_DEFAULT    0x00000000UL
#define USB_TXLOAD_TXLOADEP1B_DEFAULT     (_USB_TXLOAD_TXLOADEP1B_DEFAULT << 9)
#define USB_TXLOAD_TXLOADEP0B             (0x1UL << 8)
#define _USB_TXLOAD_TXLOADEP0B_SHIFT      8
#define _USB_TXLOAD_TXLOADEP0B_MASK       0x100UL
#define _USB_TXLOAD_TXLOADEP0B_DEFAULT    0x00000000UL
#define USB_TXLOAD_TXLOADEP0B_DEFAULT     (_USB_TXLOAD_TXLOADEP0B_DEFAULT << 8)
#define USB_TXLOAD_TXLOADEP6A             (0x1UL << 6)
#define _USB_TXLOAD_TXLOADEP6A_SHIFT      6
#define _USB_TXLOAD_TXLOADEP6A_MASK       0x40UL
#define _USB_TXLOAD_TXLOADEP6A_DEFAULT    0x00000000UL
#define USB_TXLOAD_TXLOADEP6A_DEFAULT     (_USB_TXLOAD_TXLOADEP6A_DEFAULT << 6)
#define USB_TXLOAD_TXLOADEP5A             (0x1UL << 5)
#define _USB_TXLOAD_TXLOADEP5A_SHIFT      5
#define _USB_TXLOAD_TXLOADEP5A_MASK       0x20UL
#define _USB_TXLOAD_TXLOADEP5A_DEFAULT    0x00000000UL
#define USB_TXLOAD_TXLOADEP5A_DEFAULT     (_USB_TXLOAD_TXLOADEP5A_DEFAULT << 5)
#define USB_TXLOAD_TXLOADEP4A             (0x1UL << 4)
#define _USB_TXLOAD_TXLOADEP4A_SHIFT      4
#define _USB_TXLOAD_TXLOADEP4A_MASK       0x10UL
#define _USB_TXLOAD_TXLOADEP4A_DEFAULT    0x00000000UL
#define USB_TXLOAD_TXLOADEP4A_DEFAULT     (_USB_TXLOAD_TXLOADEP4A_DEFAULT << 4)
#define USB_TXLOAD_TXLOADEP3A             (0x1UL << 3)
#define _USB_TXLOAD_TXLOADEP3A_SHIFT      3
#define _USB_TXLOAD_TXLOADEP3A_MASK       0x8UL
#define _USB_TXLOAD_TXLOADEP3A_DEFAULT    0x00000000UL
#define USB_TXLOAD_TXLOADEP3A_DEFAULT     (_USB_TXLOAD_TXLOADEP3A_DEFAULT << 3)
#define USB_TXLOAD_TXLOADEP2A             (0x1UL << 2)
#define _USB_TXLOAD_TXLOADEP2A_SHIFT      2
#define _USB_TXLOAD_TXLOADEP2A_MASK       0x4UL
#define _USB_TXLOAD_TXLOADEP2A_DEFAULT    0x00000000UL
#define USB_TXLOAD_TXLOADEP2A_DEFAULT     (_USB_TXLOAD_TXLOADEP2A_DEFAULT << 2)
#define USB_TXLOAD_TXLOADEP1A             (0x1UL << 1)
#define _USB_TXLOAD_TXLOADEP1A_SHIFT      1
#define _USB_TXLOAD_TXLOADEP1A_MASK       0x2UL
#define _USB_TXLOAD_TXLOADEP1A_DEFAULT    0x00000000UL
#define USB_TXLOAD_TXLOADEP1A_DEFAULT     (_USB_TXLOAD_TXLOADEP1A_DEFAULT << 1)
#define USB_TXLOAD_TXLOADEP0A             (0x1UL << 0)
#define _USB_TXLOAD_TXLOADEP0A_SHIFT      0
#define _USB_TXLOAD_TXLOADEP0A_MASK       0x1UL
#define _USB_TXLOAD_TXLOADEP0A_DEFAULT    0x00000000UL
#define USB_TXLOAD_TXLOADEP0A_DEFAULT     (_USB_TXLOAD_TXLOADEP0A_DEFAULT << 0)

/* Bit fields for USB TXACTIVE */
#define _USB_TXACTIVE_RESETVALUE              0x00000000UL
#define _USB_TXACTIVE_MASK                    0x00007F7FUL
#define USB_TXACTIVE_TXACTIVEEP6B             (0x1UL << 14)
#define _USB_TXACTIVE_TXACTIVEEP6B_SHIFT      14
#define _USB_TXACTIVE_TXACTIVEEP6B_MASK       0x4000UL
#define _USB_TXACTIVE_TXACTIVEEP6B_DEFAULT    0x00000000UL
#define USB_TXACTIVE_TXACTIVEEP6B_DEFAULT     (_USB_TXACTIVE_TXACTIVEEP6B_DEFAULT << 14)
#define USB_TXACTIVE_TXACTIVEEP5B             (0x1UL << 13)
#define _USB_TXACTIVE_TXACTIVEEP5B_SHIFT      13
#define _USB_TXACTIVE_TXACTIVEEP5B_MASK       0x2000UL
#define _USB_TXACTIVE_TXACTIVEEP5B_DEFAULT    0x00000000UL
#define USB_TXACTIVE_TXACTIVEEP5B_DEFAULT     (_USB_TXACTIVE_TXACTIVEEP5B_DEFAULT << 13)
#define USB_TXACTIVE_TXACTIVEEP4B             (0x1UL << 12)
#define _USB_TXACTIVE_TXACTIVEEP4B_SHIFT      12
#define _USB_TXACTIVE_TXACTIVEEP4B_MASK       0x1000UL
#define _USB_TXACTIVE_TXACTIVEEP4B_DEFAULT    0x00000000UL
#define USB_TXACTIVE_TXACTIVEEP4B_DEFAULT     (_USB_TXACTIVE_TXACTIVEEP4B_DEFAULT << 12)
#define USB_TXACTIVE_TXACTIVEEP3B             (0x1UL << 11)
#define _USB_TXACTIVE_TXACTIVEEP3B_SHIFT      11
#define _USB_TXACTIVE_TXACTIVEEP3B_MASK       0x800UL
#define _USB_TXACTIVE_TXACTIVEEP3B_DEFAULT    0x00000000UL
#define USB_TXACTIVE_TXACTIVEEP3B_DEFAULT     (_USB_TXACTIVE_TXACTIVEEP3B_DEFAULT << 11)
#define USB_TXACTIVE_TXACTIVEEP2B             (0x1UL << 10)
#define _USB_TXACTIVE_TXACTIVEEP2B_SHIFT      10
#define _USB_TXACTIVE_TXACTIVEEP2B_MASK       0x400UL
#define _USB_TXACTIVE_TXACTIVEEP2B_DEFAULT    0x00000000UL
#define USB_TXACTIVE_TXACTIVEEP2B_DEFAULT     (_USB_TXACTIVE_TXACTIVEEP2B_DEFAULT << 10)
#define USB_TXACTIVE_TXACTIVEEP1B             (0x1UL << 9)
#define _USB_TXACTIVE_TXACTIVEEP1B_SHIFT      9
#define _USB_TXACTIVE_TXACTIVEEP1B_MASK       0x200UL
#define _USB_TXACTIVE_TXACTIVEEP1B_DEFAULT    0x00000000UL
#define USB_TXACTIVE_TXACTIVEEP1B_DEFAULT     (_USB_TXACTIVE_TXACTIVEEP1B_DEFAULT << 9)
#define USB_TXACTIVE_TXACTIVEEP0B             (0x1UL << 8)
#define _USB_TXACTIVE_TXACTIVEEP0B_SHIFT      8
#define _USB_TXACTIVE_TXACTIVEEP0B_MASK       0x100UL
#define _USB_TXACTIVE_TXACTIVEEP0B_DEFAULT    0x00000000UL
#define USB_TXACTIVE_TXACTIVEEP0B_DEFAULT     (_USB_TXACTIVE_TXACTIVEEP0B_DEFAULT << 8)
#define USB_TXACTIVE_TXACTIVEEP6A             (0x1UL << 6)
#define _USB_TXACTIVE_TXACTIVEEP6A_SHIFT      6
#define _USB_TXACTIVE_TXACTIVEEP6A_MASK       0x40UL
#define _USB_TXACTIVE_TXACTIVEEP6A_DEFAULT    0x00000000UL
#define USB_TXACTIVE_TXACTIVEEP6A_DEFAULT     (_USB_TXACTIVE_TXACTIVEEP6A_DEFAULT << 6)
#define USB_TXACTIVE_TXACTIVEEP5A             (0x1UL << 5)
#define _USB_TXACTIVE_TXACTIVEEP5A_SHIFT      5
#define _USB_TXACTIVE_TXACTIVEEP5A_MASK       0x20UL
#define _USB_TXACTIVE_TXACTIVEEP5A_DEFAULT    0x00000000UL
#define USB_TXACTIVE_TXACTIVEEP5A_DEFAULT     (_USB_TXACTIVE_TXACTIVEEP5A_DEFAULT << 5)
#define USB_TXACTIVE_TXACTIVEEP4A             (0x1UL << 4)
#define _USB_TXACTIVE_TXACTIVEEP4A_SHIFT      4
#define _USB_TXACTIVE_TXACTIVEEP4A_MASK       0x10UL
#define _USB_TXACTIVE_TXACTIVEEP4A_DEFAULT    0x00000000UL
#define USB_TXACTIVE_TXACTIVEEP4A_DEFAULT     (_USB_TXACTIVE_TXACTIVEEP4A_DEFAULT << 4)
#define USB_TXACTIVE_TXACTIVEEP3A             (0x1UL << 3)
#define _USB_TXACTIVE_TXACTIVEEP3A_SHIFT      3
#define _USB_TXACTIVE_TXACTIVEEP3A_MASK       0x8UL
#define _USB_TXACTIVE_TXACTIVEEP3A_DEFAULT    0x00000000UL
#define USB_TXACTIVE_TXACTIVEEP3A_DEFAULT     (_USB_TXACTIVE_TXACTIVEEP3A_DEFAULT << 3)
#define USB_TXACTIVE_TXACTIVEEP2A             (0x1UL << 2)
#define _USB_TXACTIVE_TXACTIVEEP2A_SHIFT      2
#define _USB_TXACTIVE_TXACTIVEEP2A_MASK       0x4UL
#define _USB_TXACTIVE_TXACTIVEEP2A_DEFAULT    0x00000000UL
#define USB_TXACTIVE_TXACTIVEEP2A_DEFAULT     (_USB_TXACTIVE_TXACTIVEEP2A_DEFAULT << 2)
#define USB_TXACTIVE_TXACTIVEEP1A             (0x1UL << 1)
#define _USB_TXACTIVE_TXACTIVEEP1A_SHIFT      1
#define _USB_TXACTIVE_TXACTIVEEP1A_MASK       0x2UL
#define _USB_TXACTIVE_TXACTIVEEP1A_DEFAULT    0x00000000UL
#define USB_TXACTIVE_TXACTIVEEP1A_DEFAULT     (_USB_TXACTIVE_TXACTIVEEP1A_DEFAULT << 1)
#define USB_TXACTIVE_TXACTIVEEP0A             (0x1UL << 0)
#define _USB_TXACTIVE_TXACTIVEEP0A_SHIFT      0
#define _USB_TXACTIVE_TXACTIVEEP0A_MASK       0x1UL
#define _USB_TXACTIVE_TXACTIVEEP0A_DEFAULT    0x00000000UL
#define USB_TXACTIVE_TXACTIVEEP0A_DEFAULT     (_USB_TXACTIVE_TXACTIVEEP0A_DEFAULT << 0)

/* Bit fields for USB TXBUFSIZEEPAx */
#define _USB_TXBUFSIZEEPAx_RESETVALUE               0x00000000UL
#define _USB_TXBUFSIZEEPAx_MASK                     0x000003FFUL
#define _USB_TXBUFSIZEEPAx_TXBUFSIZEEPAx_SHIFT      0
#define _USB_TXBUFSIZEEPAx_TXBUFSIZEEPAx_MASK       0x3FFUL
#define _USB_TXBUFSIZEEPAx_TXBUFSIZEEPAx_DEFAULT    0x00000000UL
#define USB_TXBUFSIZEEPAx_TXBUFSIZEEPAx_DEFAULT     (_USB_TXBUFSIZEEPAx_TXBUFSIZEEPAx_DEFAULT << 0)

/* Bit fields for USB TXBUFSIZEEPBx */
#define _USB_TXBUFSIZEEPBx_RESETVALUE               0x00000000UL
#define _USB_TXBUFSIZEEPBx_MASK                     0x000003FFUL
#define _USB_TXBUFSIZEEPBx_TXBUFSIZEEPBx_SHIFT      0
#define _USB_TXBUFSIZEEPBx_TXBUFSIZEEPBx_MASK       0x3FFUL
#define _USB_TXBUFSIZEEPBx_TXBUFSIZEEPBx_DEFAULT    0x00000000UL
#define USB_TXBUFSIZEEPBx_TXBUFSIZEEPBx_DEFAULT     (_USB_TXBUFSIZEEPBx_TXBUFSIZEEPBx_DEFAULT << 0)

/* Bit fields for USB RXVALID */
#define _USB_RXVALID_RESETVALUE             0x00000000UL
#define _USB_RXVALID_MASK                   0x00007F7FUL
#define USB_RXVALID_RXVALIDEP6B             (0x1UL << 14)
#define _USB_RXVALID_RXVALIDEP6B_SHIFT      14
#define _USB_RXVALID_RXVALIDEP6B_MASK       0x4000UL
#define _USB_RXVALID_RXVALIDEP6B_DEFAULT    0x00000000UL
#define USB_RXVALID_RXVALIDEP6B_DEFAULT     (_USB_RXVALID_RXVALIDEP6B_DEFAULT << 14)
#define USB_RXVALID_RXVALIDEP5B             (0x1UL << 13)
#define _USB_RXVALID_RXVALIDEP5B_SHIFT      13
#define _USB_RXVALID_RXVALIDEP5B_MASK       0x2000UL
#define _USB_RXVALID_RXVALIDEP5B_DEFAULT    0x00000000UL
#define USB_RXVALID_RXVALIDEP5B_DEFAULT     (_USB_RXVALID_RXVALIDEP5B_DEFAULT << 13)
#define USB_RXVALID_RXVALIDEP4B             (0x1UL << 12)
#define _USB_RXVALID_RXVALIDEP4B_SHIFT      12
#define _USB_RXVALID_RXVALIDEP4B_MASK       0x1000UL
#define _USB_RXVALID_RXVALIDEP4B_DEFAULT    0x00000000UL
#define USB_RXVALID_RXVALIDEP4B_DEFAULT     (_USB_RXVALID_RXVALIDEP4B_DEFAULT << 12)
#define USB_RXVALID_RXVALIDEP3B             (0x1UL << 11)
#define _USB_RXVALID_RXVALIDEP3B_SHIFT      11
#define _USB_RXVALID_RXVALIDEP3B_MASK       0x800UL
#define _USB_RXVALID_RXVALIDEP3B_DEFAULT    0x00000000UL
#define USB_RXVALID_RXVALIDEP3B_DEFAULT     (_USB_RXVALID_RXVALIDEP3B_DEFAULT << 11)
#define USB_RXVALID_RXVALIDEP2B             (0x1UL << 10)
#define _USB_RXVALID_RXVALIDEP2B_SHIFT      10
#define _USB_RXVALID_RXVALIDEP2B_MASK       0x400UL
#define _USB_RXVALID_RXVALIDEP2B_DEFAULT    0x00000000UL
#define USB_RXVALID_RXVALIDEP2B_DEFAULT     (_USB_RXVALID_RXVALIDEP2B_DEFAULT << 10)
#define USB_RXVALID_RXVALIDEP1B             (0x1UL << 9)
#define _USB_RXVALID_RXVALIDEP1B_SHIFT      9
#define _USB_RXVALID_RXVALIDEP1B_MASK       0x200UL
#define _USB_RXVALID_RXVALIDEP1B_DEFAULT    0x00000000UL
#define USB_RXVALID_RXVALIDEP1B_DEFAULT     (_USB_RXVALID_RXVALIDEP1B_DEFAULT << 9)
#define USB_RXVALID_RXVALIDEP0B             (0x1UL << 8)
#define _USB_RXVALID_RXVALIDEP0B_SHIFT      8
#define _USB_RXVALID_RXVALIDEP0B_MASK       0x100UL
#define _USB_RXVALID_RXVALIDEP0B_DEFAULT    0x00000000UL
#define USB_RXVALID_RXVALIDEP0B_DEFAULT     (_USB_RXVALID_RXVALIDEP0B_DEFAULT << 8)
#define USB_RXVALID_RXVALIDEP6A             (0x1UL << 6)
#define _USB_RXVALID_RXVALIDEP6A_SHIFT      6
#define _USB_RXVALID_RXVALIDEP6A_MASK       0x40UL
#define _USB_RXVALID_RXVALIDEP6A_DEFAULT    0x00000000UL
#define USB_RXVALID_RXVALIDEP6A_DEFAULT     (_USB_RXVALID_RXVALIDEP6A_DEFAULT << 6)
#define USB_RXVALID_RXVALIDEP5A             (0x1UL << 5)
#define _USB_RXVALID_RXVALIDEP5A_SHIFT      5
#define _USB_RXVALID_RXVALIDEP5A_MASK       0x20UL
#define _USB_RXVALID_RXVALIDEP5A_DEFAULT    0x00000000UL
#define USB_RXVALID_RXVALIDEP5A_DEFAULT     (_USB_RXVALID_RXVALIDEP5A_DEFAULT << 5)
#define USB_RXVALID_RXVALIDEP4A             (0x1UL << 4)
#define _USB_RXVALID_RXVALIDEP4A_SHIFT      4
#define _USB_RXVALID_RXVALIDEP4A_MASK       0x10UL
#define _USB_RXVALID_RXVALIDEP4A_DEFAULT    0x00000000UL
#define USB_RXVALID_RXVALIDEP4A_DEFAULT     (_USB_RXVALID_RXVALIDEP4A_DEFAULT << 4)
#define USB_RXVALID_RXVALIDEP3A             (0x1UL << 3)
#define _USB_RXVALID_RXVALIDEP3A_SHIFT      3
#define _USB_RXVALID_RXVALIDEP3A_MASK       0x8UL
#define _USB_RXVALID_RXVALIDEP3A_DEFAULT    0x00000000UL
#define USB_RXVALID_RXVALIDEP3A_DEFAULT     (_USB_RXVALID_RXVALIDEP3A_DEFAULT << 3)
#define USB_RXVALID_RXVALIDEP2A             (0x1UL << 2)
#define _USB_RXVALID_RXVALIDEP2A_SHIFT      2
#define _USB_RXVALID_RXVALIDEP2A_MASK       0x4UL
#define _USB_RXVALID_RXVALIDEP2A_DEFAULT    0x00000000UL
#define USB_RXVALID_RXVALIDEP2A_DEFAULT     (_USB_RXVALID_RXVALIDEP2A_DEFAULT << 2)
#define USB_RXVALID_RXVALIDEP1A             (0x1UL << 1)
#define _USB_RXVALID_RXVALIDEP1A_SHIFT      1
#define _USB_RXVALID_RXVALIDEP1A_MASK       0x2UL
#define _USB_RXVALID_RXVALIDEP1A_DEFAULT    0x00000000UL
#define USB_RXVALID_RXVALIDEP1A_DEFAULT     (_USB_RXVALID_RXVALIDEP1A_DEFAULT << 1)
#define USB_RXVALID_RXVALIDEP0A             (0x1UL << 0)
#define _USB_RXVALID_RXVALIDEP0A_SHIFT      0
#define _USB_RXVALID_RXVALIDEP0A_MASK       0x1UL
#define _USB_RXVALID_RXVALIDEP0A_DEFAULT    0x00000000UL
#define USB_RXVALID_RXVALIDEP0A_DEFAULT     (_USB_RXVALID_RXVALIDEP0A_DEFAULT << 0)

/* Bit fields for USB ENABLEIN */
#define _USB_ENABLEIN_RESETVALUE             0x00000001UL
#define _USB_ENABLEIN_MASK                   0x0000007FUL
#define USB_ENABLEIN_ENABLEINEP6             (0x1UL << 6)
#define _USB_ENABLEIN_ENABLEINEP6_SHIFT      6
#define _USB_ENABLEIN_ENABLEINEP6_MASK       0x40UL
#define _USB_ENABLEIN_ENABLEINEP6_DEFAULT    0x00000000UL
#define USB_ENABLEIN_ENABLEINEP6_DEFAULT     (_USB_ENABLEIN_ENABLEINEP6_DEFAULT << 6)
#define USB_ENABLEIN_ENABLEINEP5             (0x1UL << 5)
#define _USB_ENABLEIN_ENABLEINEP5_SHIFT      5
#define _USB_ENABLEIN_ENABLEINEP5_MASK       0x20UL
#define _USB_ENABLEIN_ENABLEINEP5_DEFAULT    0x00000000UL
#define USB_ENABLEIN_ENABLEINEP5_DEFAULT     (_USB_ENABLEIN_ENABLEINEP5_DEFAULT << 5)
#define USB_ENABLEIN_ENABLEINEP4             (0x1UL << 4)
#define _USB_ENABLEIN_ENABLEINEP4_SHIFT      4
#define _USB_ENABLEIN_ENABLEINEP4_MASK       0x10UL
#define _USB_ENABLEIN_ENABLEINEP4_DEFAULT    0x00000000UL
#define USB_ENABLEIN_ENABLEINEP4_DEFAULT     (_USB_ENABLEIN_ENABLEINEP4_DEFAULT << 4)
#define USB_ENABLEIN_ENABLEINEP3             (0x1UL << 3)
#define _USB_ENABLEIN_ENABLEINEP3_SHIFT      3
#define _USB_ENABLEIN_ENABLEINEP3_MASK       0x8UL
#define _USB_ENABLEIN_ENABLEINEP3_DEFAULT    0x00000000UL
#define USB_ENABLEIN_ENABLEINEP3_DEFAULT     (_USB_ENABLEIN_ENABLEINEP3_DEFAULT << 3)
#define USB_ENABLEIN_ENABLEINEP2             (0x1UL << 2)
#define _USB_ENABLEIN_ENABLEINEP2_SHIFT      2
#define _USB_ENABLEIN_ENABLEINEP2_MASK       0x4UL
#define _USB_ENABLEIN_ENABLEINEP2_DEFAULT    0x00000000UL
#define USB_ENABLEIN_ENABLEINEP2_DEFAULT     (_USB_ENABLEIN_ENABLEINEP2_DEFAULT << 2)
#define USB_ENABLEIN_ENABLEINEP1             (0x1UL << 1)
#define _USB_ENABLEIN_ENABLEINEP1_SHIFT      1
#define _USB_ENABLEIN_ENABLEINEP1_MASK       0x2UL
#define _USB_ENABLEIN_ENABLEINEP1_DEFAULT    0x00000000UL
#define USB_ENABLEIN_ENABLEINEP1_DEFAULT     (_USB_ENABLEIN_ENABLEINEP1_DEFAULT << 1)
#define USB_ENABLEIN_ENABLEINEP0             (0x1UL << 0)
#define _USB_ENABLEIN_ENABLEINEP0_SHIFT      0
#define _USB_ENABLEIN_ENABLEINEP0_MASK       0x1UL
#define _USB_ENABLEIN_ENABLEINEP0_DEFAULT    0x00000001UL
#define USB_ENABLEIN_ENABLEINEP0_DEFAULT     (_USB_ENABLEIN_ENABLEINEP0_DEFAULT << 0)

/* Bit fields for USB ENABLEOUT */
#define _USB_ENABLEOUT_RESETVALUE              0x00000001UL
#define _USB_ENABLEOUT_MASK                    0x0000007FUL
#define USB_ENABLEOUT_ENABLEOUTEP6             (0x1UL << 6)
#define _USB_ENABLEOUT_ENABLEOUTEP6_SHIFT      6
#define _USB_ENABLEOUT_ENABLEOUTEP6_MASK       0x40UL
#define _USB_ENABLEOUT_ENABLEOUTEP6_DEFAULT    0x00000000UL
#define USB_ENABLEOUT_ENABLEOUTEP6_DEFAULT     (_USB_ENABLEOUT_ENABLEOUTEP6_DEFAULT << 6)
#define USB_ENABLEOUT_ENABLEOUTEP5             (0x1UL << 5)
#define _USB_ENABLEOUT_ENABLEOUTEP5_SHIFT      5
#define _USB_ENABLEOUT_ENABLEOUTEP5_MASK       0x20UL
#define _USB_ENABLEOUT_ENABLEOUTEP5_DEFAULT    0x00000000UL
#define USB_ENABLEOUT_ENABLEOUTEP5_DEFAULT     (_USB_ENABLEOUT_ENABLEOUTEP5_DEFAULT << 5)
#define USB_ENABLEOUT_ENABLEOUTEP4             (0x1UL << 4)
#define _USB_ENABLEOUT_ENABLEOUTEP4_SHIFT      4
#define _USB_ENABLEOUT_ENABLEOUTEP4_MASK       0x10UL
#define _USB_ENABLEOUT_ENABLEOUTEP4_DEFAULT    0x00000000UL
#define USB_ENABLEOUT_ENABLEOUTEP4_DEFAULT     (_USB_ENABLEOUT_ENABLEOUTEP4_DEFAULT << 4)
#define USB_ENABLEOUT_ENABLEOUTEP3             (0x1UL << 3)
#define _USB_ENABLEOUT_ENABLEOUTEP3_SHIFT      3
#define _USB_ENABLEOUT_ENABLEOUTEP3_MASK       0x8UL
#define _USB_ENABLEOUT_ENABLEOUTEP3_DEFAULT    0x00000000UL
#define USB_ENABLEOUT_ENABLEOUTEP3_DEFAULT     (_USB_ENABLEOUT_ENABLEOUTEP3_DEFAULT << 3)
#define USB_ENABLEOUT_ENABLEOUTEP2             (0x1UL << 2)
#define _USB_ENABLEOUT_ENABLEOUTEP2_SHIFT      2
#define _USB_ENABLEOUT_ENABLEOUTEP2_MASK       0x4UL
#define _USB_ENABLEOUT_ENABLEOUTEP2_DEFAULT    0x00000000UL
#define USB_ENABLEOUT_ENABLEOUTEP2_DEFAULT     (_USB_ENABLEOUT_ENABLEOUTEP2_DEFAULT << 2)
#define USB_ENABLEOUT_ENABLEOUTEP1             (0x1UL << 1)
#define _USB_ENABLEOUT_ENABLEOUTEP1_SHIFT      1
#define _USB_ENABLEOUT_ENABLEOUTEP1_MASK       0x2UL
#define _USB_ENABLEOUT_ENABLEOUTEP1_DEFAULT    0x00000000UL
#define USB_ENABLEOUT_ENABLEOUTEP1_DEFAULT     (_USB_ENABLEOUT_ENABLEOUTEP1_DEFAULT << 1)
#define USB_ENABLEOUT_ENABLEOUTEP0             (0x1UL << 0)
#define _USB_ENABLEOUT_ENABLEOUTEP0_SHIFT      0
#define _USB_ENABLEOUT_ENABLEOUTEP0_MASK       0x1UL
#define _USB_ENABLEOUT_ENABLEOUTEP0_DEFAULT    0x00000001UL
#define USB_ENABLEOUT_ENABLEOUTEP0_DEFAULT     (_USB_ENABLEOUT_ENABLEOUTEP0_DEFAULT << 0)

/* Bit fields for USB STALLIN */
#define _USB_STALLIN_RESETVALUE            0x00000000UL
#define _USB_STALLIN_MASK                  0x0000007FUL
#define USB_STALLIN_STALLINEP6             (0x1UL << 6)
#define _USB_STALLIN_STALLINEP6_SHIFT      6
#define _USB_STALLIN_STALLINEP6_MASK       0x40UL
#define _USB_STALLIN_STALLINEP6_DEFAULT    0x00000000UL
#define USB_STALLIN_STALLINEP6_DEFAULT     (_USB_STALLIN_STALLINEP6_DEFAULT << 6)
#define USB_STALLIN_STALLINEP5             (0x1UL << 5)
#define _USB_STALLIN_STALLINEP5_SHIFT      5
#define _USB_STALLIN_STALLINEP5_MASK       0x20UL
#define _USB_STALLIN_STALLINEP5_DEFAULT    0x00000000UL
#define USB_STALLIN_STALLINEP5_DEFAULT     (_USB_STALLIN_STALLINEP5_DEFAULT << 5)
#define USB_STALLIN_STALLINEP4             (0x1UL << 4)
#define _USB_STALLIN_STALLINEP4_SHIFT      4
#define _USB_STALLIN_STALLINEP4_MASK       0x10UL
#define _USB_STALLIN_STALLINEP4_DEFAULT    0x00000000UL
#define USB_STALLIN_STALLINEP4_DEFAULT     (_USB_STALLIN_STALLINEP4_DEFAULT << 4)
#define USB_STALLIN_STALLINEP3             (0x1UL << 3)
#define _USB_STALLIN_STALLINEP3_SHIFT      3
#define _USB_STALLIN_STALLINEP3_MASK       0x8UL
#define _USB_STALLIN_STALLINEP3_DEFAULT    0x00000000UL
#define USB_STALLIN_STALLINEP3_DEFAULT     (_USB_STALLIN_STALLINEP3_DEFAULT << 3)
#define USB_STALLIN_STALLINEP2             (0x1UL << 2)
#define _USB_STALLIN_STALLINEP2_SHIFT      2
#define _USB_STALLIN_STALLINEP2_MASK       0x4UL
#define _USB_STALLIN_STALLINEP2_DEFAULT    0x00000000UL
#define USB_STALLIN_STALLINEP2_DEFAULT     (_USB_STALLIN_STALLINEP2_DEFAULT << 2)
#define USB_STALLIN_STALLINEP1             (0x1UL << 1)
#define _USB_STALLIN_STALLINEP1_SHIFT      1
#define _USB_STALLIN_STALLINEP1_MASK       0x2UL
#define _USB_STALLIN_STALLINEP1_DEFAULT    0x00000000UL
#define USB_STALLIN_STALLINEP1_DEFAULT     (_USB_STALLIN_STALLINEP1_DEFAULT << 1)
#define USB_STALLIN_STALLINEP0             (0x1UL << 0)
#define _USB_STALLIN_STALLINEP0_SHIFT      0
#define _USB_STALLIN_STALLINEP0_MASK       0x1UL
#define _USB_STALLIN_STALLINEP0_DEFAULT    0x00000000UL
#define USB_STALLIN_STALLINEP0_DEFAULT     (_USB_STALLIN_STALLINEP0_DEFAULT << 0)

/* Bit fields for USB STALLOUT */
#define _USB_STALLOUT_RESETVALUE             0x00000000UL
#define _USB_STALLOUT_MASK                   0x0000007FUL
#define USB_STALLOUT_STALLOUTEP6             (0x1UL << 6)
#define _USB_STALLOUT_STALLOUTEP6_SHIFT      6
#define _USB_STALLOUT_STALLOUTEP6_MASK       0x40UL
#define _USB_STALLOUT_STALLOUTEP6_DEFAULT    0x00000000UL
#define USB_STALLOUT_STALLOUTEP6_DEFAULT     (_USB_STALLOUT_STALLOUTEP6_DEFAULT << 6)
#define USB_STALLOUT_STALLOUTEP5             (0x1UL << 5)
#define _USB_STALLOUT_STALLOUTEP5_SHIFT      5
#define _USB_STALLOUT_STALLOUTEP5_MASK       0x20UL
#define _USB_STALLOUT_STALLOUTEP5_DEFAULT    0x00000000UL
#define USB_STALLOUT_STALLOUTEP5_DEFAULT     (_USB_STALLOUT_STALLOUTEP5_DEFAULT << 5)
#define USB_STALLOUT_STALLOUTEP4             (0x1UL << 4)
#define _USB_STALLOUT_STALLOUTEP4_SHIFT      4
#define _USB_STALLOUT_STALLOUTEP4_MASK       0x10UL
#define _USB_STALLOUT_STALLOUTEP4_DEFAULT    0x00000000UL
#define USB_STALLOUT_STALLOUTEP4_DEFAULT     (_USB_STALLOUT_STALLOUTEP4_DEFAULT << 4)
#define USB_STALLOUT_STALLOUTEP3             (0x1UL << 3)
#define _USB_STALLOUT_STALLOUTEP3_SHIFT      3
#define _USB_STALLOUT_STALLOUTEP3_MASK       0x8UL
#define _USB_STALLOUT_STALLOUTEP3_DEFAULT    0x00000000UL
#define USB_STALLOUT_STALLOUTEP3_DEFAULT     (_USB_STALLOUT_STALLOUTEP3_DEFAULT << 3)
#define USB_STALLOUT_STALLOUTEP2             (0x1UL << 2)
#define _USB_STALLOUT_STALLOUTEP2_SHIFT      2
#define _USB_STALLOUT_STALLOUTEP2_MASK       0x4UL
#define _USB_STALLOUT_STALLOUTEP2_DEFAULT    0x00000000UL
#define USB_STALLOUT_STALLOUTEP2_DEFAULT     (_USB_STALLOUT_STALLOUTEP2_DEFAULT << 2)
#define USB_STALLOUT_STALLOUTEP1             (0x1UL << 1)
#define _USB_STALLOUT_STALLOUTEP1_SHIFT      1
#define _USB_STALLOUT_STALLOUTEP1_MASK       0x2UL
#define _USB_STALLOUT_STALLOUTEP1_DEFAULT    0x00000000UL
#define USB_STALLOUT_STALLOUTEP1_DEFAULT     (_USB_STALLOUT_STALLOUTEP1_DEFAULT << 1)
#define USB_STALLOUT_STALLOUTEP0             (0x1UL << 0)
#define _USB_STALLOUT_STALLOUTEP0_SHIFT      0
#define _USB_STALLOUT_STALLOUTEP0_MASK       0x1UL
#define _USB_STALLOUT_STALLOUTEP0_DEFAULT    0x00000000UL
#define USB_STALLOUT_STALLOUTEP0_DEFAULT     (_USB_STALLOUT_STALLOUTEP0_DEFAULT << 0)

/* Bit fields for USB CTRL */
#define _USB_CTRL_RESETVALUE              0x00000004UL
#define _USB_CTRL_MASK                    0x00FF7F07UL
#define USB_CTRL_RESETCTRL                (0x1UL << 23)
#define _USB_CTRL_RESETCTRL_SHIFT         23
#define _USB_CTRL_RESETCTRL_MASK          0x800000UL
#define _USB_CTRL_RESETCTRL_DEFAULT       0x00000000UL
#define USB_CTRL_RESETCTRL_DEFAULT        (_USB_CTRL_RESETCTRL_DEFAULT << 23)
#define USB_CTRL_ENBUFOUTEP6B             (0x1UL << 22)
#define _USB_CTRL_ENBUFOUTEP6B_SHIFT      22
#define _USB_CTRL_ENBUFOUTEP6B_MASK       0x400000UL
#define _USB_CTRL_ENBUFOUTEP6B_DEFAULT    0x00000000UL
#define USB_CTRL_ENBUFOUTEP6B_DEFAULT     (_USB_CTRL_ENBUFOUTEP6B_DEFAULT << 22)
#define USB_CTRL_ENBUFOUTEP5B             (0x1UL << 21)
#define _USB_CTRL_ENBUFOUTEP5B_SHIFT      21
#define _USB_CTRL_ENBUFOUTEP5B_MASK       0x200000UL
#define _USB_CTRL_ENBUFOUTEP5B_DEFAULT    0x00000000UL
#define USB_CTRL_ENBUFOUTEP5B_DEFAULT     (_USB_CTRL_ENBUFOUTEP5B_DEFAULT << 21)
#define USB_CTRL_ENBUFOUTEP4B             (0x1UL << 20)
#define _USB_CTRL_ENBUFOUTEP4B_SHIFT      20
#define _USB_CTRL_ENBUFOUTEP4B_MASK       0x100000UL
#define _USB_CTRL_ENBUFOUTEP4B_DEFAULT    0x00000000UL
#define USB_CTRL_ENBUFOUTEP4B_DEFAULT     (_USB_CTRL_ENBUFOUTEP4B_DEFAULT << 20)
#define USB_CTRL_ENBUFOUTEP3B             (0x1UL << 19)
#define _USB_CTRL_ENBUFOUTEP3B_SHIFT      19
#define _USB_CTRL_ENBUFOUTEP3B_MASK       0x80000UL
#define _USB_CTRL_ENBUFOUTEP3B_DEFAULT    0x00000000UL
#define USB_CTRL_ENBUFOUTEP3B_DEFAULT     (_USB_CTRL_ENBUFOUTEP3B_DEFAULT << 19)
#define USB_CTRL_ENBUFOUTEP2B             (0x1UL << 18)
#define _USB_CTRL_ENBUFOUTEP2B_SHIFT      18
#define _USB_CTRL_ENBUFOUTEP2B_MASK       0x40000UL
#define _USB_CTRL_ENBUFOUTEP2B_DEFAULT    0x00000000UL
#define USB_CTRL_ENBUFOUTEP2B_DEFAULT     (_USB_CTRL_ENBUFOUTEP2B_DEFAULT << 18)
#define USB_CTRL_ENBUFOUTEP1B             (0x1UL << 17)
#define _USB_CTRL_ENBUFOUTEP1B_SHIFT      17
#define _USB_CTRL_ENBUFOUTEP1B_MASK       0x20000UL
#define _USB_CTRL_ENBUFOUTEP1B_DEFAULT    0x00000000UL
#define USB_CTRL_ENBUFOUTEP1B_DEFAULT     (_USB_CTRL_ENBUFOUTEP1B_DEFAULT << 17)
#define USB_CTRL_ENBUFOUTEP0B             (0x1UL << 16)
#define _USB_CTRL_ENBUFOUTEP0B_SHIFT      16
#define _USB_CTRL_ENBUFOUTEP0B_MASK       0x10000UL
#define _USB_CTRL_ENBUFOUTEP0B_DEFAULT    0x00000000UL
#define USB_CTRL_ENBUFOUTEP0B_DEFAULT     (_USB_CTRL_ENBUFOUTEP0B_DEFAULT << 16)
#define USB_CTRL_ENBUFINEP6B              (0x1UL << 14)
#define _USB_CTRL_ENBUFINEP6B_SHIFT       14
#define _USB_CTRL_ENBUFINEP6B_MASK        0x4000UL
#define _USB_CTRL_ENBUFINEP6B_DEFAULT     0x00000000UL
#define USB_CTRL_ENBUFINEP6B_DEFAULT      (_USB_CTRL_ENBUFINEP6B_DEFAULT << 14)
#define USB_CTRL_ENBUFINEP5B              (0x1UL << 13)
#define _USB_CTRL_ENBUFINEP5B_SHIFT       13
#define _USB_CTRL_ENBUFINEP5B_MASK        0x2000UL
#define _USB_CTRL_ENBUFINEP5B_DEFAULT     0x00000000UL
#define USB_CTRL_ENBUFINEP5B_DEFAULT      (_USB_CTRL_ENBUFINEP5B_DEFAULT << 13)
#define USB_CTRL_ENBUFINEP4B              (0x1UL << 12)
#define _USB_CTRL_ENBUFINEP4B_SHIFT       12
#define _USB_CTRL_ENBUFINEP4B_MASK        0x1000UL
#define _USB_CTRL_ENBUFINEP4B_DEFAULT     0x00000000UL
#define USB_CTRL_ENBUFINEP4B_DEFAULT      (_USB_CTRL_ENBUFINEP4B_DEFAULT << 12)
#define USB_CTRL_ENBUFINEP3B              (0x1UL << 11)
#define _USB_CTRL_ENBUFINEP3B_SHIFT       11
#define _USB_CTRL_ENBUFINEP3B_MASK        0x800UL
#define _USB_CTRL_ENBUFINEP3B_DEFAULT     0x00000000UL
#define USB_CTRL_ENBUFINEP3B_DEFAULT      (_USB_CTRL_ENBUFINEP3B_DEFAULT << 11)
#define USB_CTRL_ENBUFINEP2B              (0x1UL << 10)
#define _USB_CTRL_ENBUFINEP2B_SHIFT       10
#define _USB_CTRL_ENBUFINEP2B_MASK        0x400UL
#define _USB_CTRL_ENBUFINEP2B_DEFAULT     0x00000000UL
#define USB_CTRL_ENBUFINEP2B_DEFAULT      (_USB_CTRL_ENBUFINEP2B_DEFAULT << 10)
#define USB_CTRL_ENBUFINEP1B              (0x1UL << 9)
#define _USB_CTRL_ENBUFINEP1B_SHIFT       9
#define _USB_CTRL_ENBUFINEP1B_MASK        0x200UL
#define _USB_CTRL_ENBUFINEP1B_DEFAULT     0x00000000UL
#define USB_CTRL_ENBUFINEP1B_DEFAULT      (_USB_CTRL_ENBUFINEP1B_DEFAULT << 9)
#define USB_CTRL_ENBUFINEP0B              (0x1UL << 8)
#define _USB_CTRL_ENBUFINEP0B_SHIFT       8
#define _USB_CTRL_ENBUFINEP0B_MASK        0x100UL
#define _USB_CTRL_ENBUFINEP0B_DEFAULT     0x00000000UL
#define USB_CTRL_ENBUFINEP0B_DEFAULT      (_USB_CTRL_ENBUFINEP0B_DEFAULT << 8)
#define USB_CTRL_REMOTEWKUPEN             (0x1UL << 2)
#define _USB_CTRL_REMOTEWKUPEN_SHIFT      2
#define _USB_CTRL_REMOTEWKUPEN_MASK       0x4UL
#define _USB_CTRL_REMOTEWKUPEN_DEFAULT    0x00000001UL
#define USB_CTRL_REMOTEWKUPEN_DEFAULT     (_USB_CTRL_REMOTEWKUPEN_DEFAULT << 2)
#define USB_CTRL_CLRFEP0STALL             (0x1UL << 1)
#define _USB_CTRL_CLRFEP0STALL_SHIFT      1
#define _USB_CTRL_CLRFEP0STALL_MASK       0x2UL
#define _USB_CTRL_CLRFEP0STALL_DEFAULT    0x00000000UL
#define USB_CTRL_CLRFEP0STALL_DEFAULT     (_USB_CTRL_CLRFEP0STALL_DEFAULT << 1)
#define USB_CTRL_SELFPWRD                 (0x1UL << 0)
#define _USB_CTRL_SELFPWRD_SHIFT          0
#define _USB_CTRL_SELFPWRD_MASK           0x1UL
#define _USB_CTRL_SELFPWRD_DEFAULT        0x00000000UL
#define USB_CTRL_SELFPWRD_DEFAULT         (_USB_CTRL_SELFPWRD_DEFAULT << 0)

/* Bit fields for USB PIPECLR */
#define _USB_PIPECLR_RESETVALUE           0x00000000UL
#define _USB_PIPECLR_MASK                 0x00000003UL
#define USB_PIPECLR_RXPIPECLR             (0x1UL << 1)
#define _USB_PIPECLR_RXPIPECLR_SHIFT      1
#define _USB_PIPECLR_RXPIPECLR_MASK       0x2UL
#define _USB_PIPECLR_RXPIPECLR_DEFAULT    0x00000000UL
#define USB_PIPECLR_RXPIPECLR_DEFAULT     (_USB_PIPECLR_RXPIPECLR_DEFAULT << 1)
#define USB_PIPECLR_TXPIPECLR             (0x1UL << 0)
#define _USB_PIPECLR_TXPIPECLR_SHIFT      0
#define _USB_PIPECLR_TXPIPECLR_MASK       0x1UL
#define _USB_PIPECLR_TXPIPECLR_DEFAULT    0x00000000UL
#define USB_PIPECLR_TXPIPECLR_DEFAULT     (_USB_PIPECLR_TXPIPECLR_DEFAULT << 0)

/* Bit fields for USB BUFCLR */
#define _USB_BUFCLR_RESETVALUE             0x00000000UL
#define _USB_BUFCLR_MASK                   0x0000007FUL
#define USB_BUFCLR_BUFCLRINEP6             (0x1UL << 6)
#define _USB_BUFCLR_BUFCLRINEP6_SHIFT      6
#define _USB_BUFCLR_BUFCLRINEP6_MASK       0x40UL
#define _USB_BUFCLR_BUFCLRINEP6_DEFAULT    0x00000000UL
#define USB_BUFCLR_BUFCLRINEP6_DEFAULT     (_USB_BUFCLR_BUFCLRINEP6_DEFAULT << 6)
#define USB_BUFCLR_BUFCLRINEP5             (0x1UL << 5)
#define _USB_BUFCLR_BUFCLRINEP5_SHIFT      5
#define _USB_BUFCLR_BUFCLRINEP5_MASK       0x20UL
#define _USB_BUFCLR_BUFCLRINEP5_DEFAULT    0x00000000UL
#define USB_BUFCLR_BUFCLRINEP5_DEFAULT     (_USB_BUFCLR_BUFCLRINEP5_DEFAULT << 5)
#define USB_BUFCLR_BUFCLRINEP4             (0x1UL << 4)
#define _USB_BUFCLR_BUFCLRINEP4_SHIFT      4
#define _USB_BUFCLR_BUFCLRINEP4_MASK       0x10UL
#define _USB_BUFCLR_BUFCLRINEP4_DEFAULT    0x00000000UL
#define USB_BUFCLR_BUFCLRINEP4_DEFAULT     (_USB_BUFCLR_BUFCLRINEP4_DEFAULT << 4)
#define USB_BUFCLR_BUFCLRINEP3             (0x1UL << 3)
#define _USB_BUFCLR_BUFCLRINEP3_SHIFT      3
#define _USB_BUFCLR_BUFCLRINEP3_MASK       0x8UL
#define _USB_BUFCLR_BUFCLRINEP3_DEFAULT    0x00000000UL
#define USB_BUFCLR_BUFCLRINEP3_DEFAULT     (_USB_BUFCLR_BUFCLRINEP3_DEFAULT << 3)
#define USB_BUFCLR_BUFCLRINEP2             (0x1UL << 2)
#define _USB_BUFCLR_BUFCLRINEP2_SHIFT      2
#define _USB_BUFCLR_BUFCLRINEP2_MASK       0x4UL
#define _USB_BUFCLR_BUFCLRINEP2_DEFAULT    0x00000000UL
#define USB_BUFCLR_BUFCLRINEP2_DEFAULT     (_USB_BUFCLR_BUFCLRINEP2_DEFAULT << 2)
#define USB_BUFCLR_BUFCLRINEP1             (0x1UL << 1)
#define _USB_BUFCLR_BUFCLRINEP1_SHIFT      1
#define _USB_BUFCLR_BUFCLRINEP1_MASK       0x2UL
#define _USB_BUFCLR_BUFCLRINEP1_DEFAULT    0x00000000UL
#define USB_BUFCLR_BUFCLRINEP1_DEFAULT     (_USB_BUFCLR_BUFCLRINEP1_DEFAULT << 1)
#define USB_BUFCLR_BUFCLRINEP0             (0x1UL << 0)
#define _USB_BUFCLR_BUFCLRINEP0_SHIFT      0
#define _USB_BUFCLR_BUFCLRINEP0_MASK       0x1UL
#define _USB_BUFCLR_BUFCLRINEP0_DEFAULT    0x00000000UL
#define USB_BUFCLR_BUFCLRINEP0_DEFAULT     (_USB_BUFCLR_BUFCLRINEP0_DEFAULT << 0)

/* Bit fields for USB RESUME */
#define _USB_RESUME_RESETVALUE        0x00000000UL
#define _USB_RESUME_MASK              0x00000001UL
#define _USB_RESUME_RESUME_SHIFT      0
#define _USB_RESUME_RESUME_MASK       0x1UL
#define _USB_RESUME_RESUME_DEFAULT    0x00000000UL
#define USB_RESUME_RESUME_DEFAULT     (_USB_RESUME_RESUME_DEFAULT << 0)

/* Bit fields for USB STATUS */
#define _USB_STATUS_RESETVALUE           0x00000000UL
#define _USB_STATUS_MASK                 0x00001FFFUL
#define USB_STATUS_RESETSTAT             (0x1UL << 12)
#define _USB_STATUS_RESETSTAT_SHIFT      12
#define _USB_STATUS_RESETSTAT_MASK       0x1000UL
#define _USB_STATUS_RESETSTAT_DEFAULT    0x00000000UL
#define USB_STATUS_RESETSTAT_DEFAULT     (_USB_STATUS_RESETSTAT_DEFAULT << 12)
#define USB_STATUS_SUSPENDED             (0x1UL << 11)
#define _USB_STATUS_SUSPENDED_SHIFT      11
#define _USB_STATUS_SUSPENDED_MASK       0x800UL
#define _USB_STATUS_SUSPENDED_DEFAULT    0x00000000UL
#define USB_STATUS_SUSPENDED_DEFAULT     (_USB_STATUS_SUSPENDED_DEFAULT << 11)
#define _USB_STATUS_TIMESTAMP_SHIFT      0
#define _USB_STATUS_TIMESTAMP_MASK       0x7FFUL
#define _USB_STATUS_TIMESTAMP_DEFAULT    0x00000000UL
#define USB_STATUS_TIMESTAMP_DEFAULT     (_USB_STATUS_TIMESTAMP_DEFAULT << 0)

/* Bit fields for USB STATUS2 */
#define _USB_STATUS2_RESETVALUE               0x00000000UL
#define _USB_STATUS2_MASK                     0x00000001UL
#define _USB_STATUS2_DP_RPU_EN_SW2_SHIFT      0
#define _USB_STATUS2_DP_RPU_EN_SW2_MASK       0x1UL
#define _USB_STATUS2_DP_RPU_EN_SW2_DEFAULT    0x00000000UL
#define USB_STATUS2_DP_RPU_EN_SW2_DEFAULT     (_USB_STATUS2_DP_RPU_EN_SW2_DEFAULT << 0)

/* Bit fields for USB INTF1SEL */
#define _USB_INTF1SEL_RESETVALUE             0x00000000UL
#define _USB_INTF1SEL_MASK                   0x8000007EUL
#define USB_INTF1SEL_INTF1SELEN              (0x1UL << 31)
#define _USB_INTF1SEL_INTF1SELEN_SHIFT       31
#define _USB_INTF1SEL_INTF1SELEN_MASK        0x80000000UL
#define _USB_INTF1SEL_INTF1SELEN_DEFAULT     0x00000000UL
#define USB_INTF1SEL_INTF1SELEN_DEFAULT      (_USB_INTF1SEL_INTF1SELEN_DEFAULT << 31)
#define USB_INTF1SEL_INTF1SELEP6             (0x1UL << 6)
#define _USB_INTF1SEL_INTF1SELEP6_SHIFT      6
#define _USB_INTF1SEL_INTF1SELEP6_MASK       0x40UL
#define _USB_INTF1SEL_INTF1SELEP6_DEFAULT    0x00000000UL
#define USB_INTF1SEL_INTF1SELEP6_DEFAULT     (_USB_INTF1SEL_INTF1SELEP6_DEFAULT << 6)
#define USB_INTF1SEL_INTF1SELEP5             (0x1UL << 5)
#define _USB_INTF1SEL_INTF1SELEP5_SHIFT      5
#define _USB_INTF1SEL_INTF1SELEP5_MASK       0x20UL
#define _USB_INTF1SEL_INTF1SELEP5_DEFAULT    0x00000000UL
#define USB_INTF1SEL_INTF1SELEP5_DEFAULT     (_USB_INTF1SEL_INTF1SELEP5_DEFAULT << 5)
#define USB_INTF1SEL_INTF1SELEP4             (0x1UL << 4)
#define _USB_INTF1SEL_INTF1SELEP4_SHIFT      4
#define _USB_INTF1SEL_INTF1SELEP4_MASK       0x10UL
#define _USB_INTF1SEL_INTF1SELEP4_DEFAULT    0x00000000UL
#define USB_INTF1SEL_INTF1SELEP4_DEFAULT     (_USB_INTF1SEL_INTF1SELEP4_DEFAULT << 4)
#define USB_INTF1SEL_INTF1SELEP3             (0x1UL << 3)
#define _USB_INTF1SEL_INTF1SELEP3_SHIFT      3
#define _USB_INTF1SEL_INTF1SELEP3_MASK       0x8UL
#define _USB_INTF1SEL_INTF1SELEP3_DEFAULT    0x00000000UL
#define USB_INTF1SEL_INTF1SELEP3_DEFAULT     (_USB_INTF1SEL_INTF1SELEP3_DEFAULT << 3)
#define USB_INTF1SEL_INTF1SELEP2             (0x1UL << 2)
#define _USB_INTF1SEL_INTF1SELEP2_SHIFT      2
#define _USB_INTF1SEL_INTF1SELEP2_MASK       0x4UL
#define _USB_INTF1SEL_INTF1SELEP2_DEFAULT    0x00000000UL
#define USB_INTF1SEL_INTF1SELEP2_DEFAULT     (_USB_INTF1SEL_INTF1SELEP2_DEFAULT << 2)
#define USB_INTF1SEL_INTF1SELEP1             (0x1UL << 1)
#define _USB_INTF1SEL_INTF1SELEP1_SHIFT      1
#define _USB_INTF1SEL_INTF1SELEP1_MASK       0x2UL
#define _USB_INTF1SEL_INTF1SELEP1_DEFAULT    0x00000000UL
#define USB_INTF1SEL_INTF1SELEP1_DEFAULT     (_USB_INTF1SEL_INTF1SELEP1_DEFAULT << 1)

/* Bit fields for USB RXBUFSIZEEPAx */
#define _USB_RXBUFSIZEEPAx_RESETVALUE               0x00000000UL
#define _USB_RXBUFSIZEEPAx_MASK                     0x000003FFUL
#define _USB_RXBUFSIZEEPAx_RXBUFSIZEEPAx_SHIFT      0
#define _USB_RXBUFSIZEEPAx_RXBUFSIZEEPAx_MASK       0x3FFUL
#define _USB_RXBUFSIZEEPAx_RXBUFSIZEEPAx_DEFAULT    0x00000000UL
#define USB_RXBUFSIZEEPAx_RXBUFSIZEEPAx_DEFAULT     (_USB_RXBUFSIZEEPAx_RXBUFSIZEEPAx_DEFAULT << 0)

/* Bit fields for USB RXBUFSIZEEPBx */
#define _USB_RXBUFSIZEEPBx_RESETVALUE               0x00000000UL
#define _USB_RXBUFSIZEEPBx_MASK                     0x000003FFUL
#define _USB_RXBUFSIZEEPBx_RXBUFSIZEEPBx_SHIFT      0
#define _USB_RXBUFSIZEEPBx_RXBUFSIZEEPBx_MASK       0x3FFUL
#define _USB_RXBUFSIZEEPBx_RXBUFSIZEEPBx_DEFAULT    0x00000000UL
#define USB_RXBUFSIZEEPBx_RXBUFSIZEEPBx_DEFAULT     (_USB_RXBUFSIZEEPBx_RXBUFSIZEEPBx_DEFAULT << 0)

/** @} End of group EM359X_USB_BitFields */

#endif // EM359X_USB_H
