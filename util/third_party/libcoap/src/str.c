/***************************************************************************//**
 * # License
 * 
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is Third Party Software licensed by Silicon Labs from a third party
 * and is governed by the sections of the MSLA applicable to Third Party
 * Software and the additional terms set forth below.
 * 
 ******************************************************************************/

/* str.c -- strings to be used in the CoAP library
 *
 * Copyright (C) 2010,2011 Olaf Bergmann <bergmann@tzi.org>
 *
 * This file is part of the CoAP library libcoap. Please see
 * README for terms of use. 
 */

#include "coap_config.h"

#include <stdio.h>

// TBD:  DCS:  need to include correct debug.h
#include "include/coap/debug.h"
#include "mem.h"
#include "str.h"

str *coap_new_string(size_t size) {
  str *s = coap_malloc(sizeof(str) + size + 1);
  if ( !s ) {
#ifndef NDEBUG
    coap_log(LOG_CRIT, "coap_new_string: malloc\n");
#endif
    return NULL;
  }

  memset(s, 0, sizeof(str));
  s->s = ((unsigned char *)s) + sizeof(str);
  return s;
}

void coap_delete_string(str *s) {
  coap_free(s);
}

