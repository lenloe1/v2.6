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
/*******************************************************************************
 * Copyright (c) 2009, 2014 IBM Corp.
 *
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * and Eclipse Distribution License v1.0 which accompany this distribution. 
 *
 * The Eclipse Public License is available at 
 *    http://www.eclipse.org/legal/epl-v10.html
 * and the Eclipse Distribution License is available at 
 *   http://www.eclipse.org/org/documents/edl-v10.php.
 *
 * Contributors:
 *    Ian Craggs - initial API and implementation and/or initial documentation
 *******************************************************************************/

#ifndef STACKTRACE_H_
#define STACKTRACE_H_

#include <stdio.h>
#include "Log.h"
#include "Thread.h"

#if defined(NOSTACKTRACE)
#define FUNC_ENTRY
#define FUNC_ENTRY_NOLOG
#define FUNC_ENTRY_MED
#define FUNC_ENTRY_MAX
#define FUNC_EXIT
#define FUNC_EXIT_NOLOG
#define FUNC_EXIT_MED
#define FUNC_EXIT_MAX
#define FUNC_EXIT_RC(x)
#define FUNC_EXIT_MED_RC(x)
#define FUNC_EXIT_MAX_RC(x)
#else
#if defined(WIN32) || defined(WIN64)
#define inline __inline
#define FUNC_ENTRY StackTrace_entry(__FUNCTION__, __LINE__, TRACE_MINIMUM)
#define FUNC_ENTRY_NOLOG StackTrace_entry(__FUNCTION__, __LINE__, -1)
#define FUNC_ENTRY_MED StackTrace_entry(__FUNCTION__, __LINE__, TRACE_MEDIUM)
#define FUNC_ENTRY_MAX StackTrace_entry(__FUNCTION__, __LINE__, TRACE_MAXIMUM)
#define FUNC_EXIT StackTrace_exit(__FUNCTION__, __LINE__, NULL, TRACE_MINIMUM)
#define FUNC_EXIT_NOLOG StackTrace_exit(__FUNCTION__, __LINE__, -1)
#define FUNC_EXIT_MED StackTrace_exit(__FUNCTION__, __LINE__, NULL, TRACE_MEDIUM)
#define FUNC_EXIT_MAX StackTrace_exit(__FUNCTION__, __LINE__, NULL, TRACE_MAXIMUM)
#define FUNC_EXIT_RC(x) StackTrace_exit(__FUNCTION__, __LINE__, &x, TRACE_MINIMUM)
#define FUNC_EXIT_MED_RC(x) StackTrace_exit(__FUNCTION__, __LINE__, &x, TRACE_MEDIUM)
#define FUNC_EXIT_MAX_RC(x) StackTrace_exit(__FUNCTION__, __LINE__, &x, TRACE_MAXIMUM)
#else
#define FUNC_ENTRY StackTrace_entry(__func__, __LINE__, TRACE_MINIMUM)
#define FUNC_ENTRY_NOLOG StackTrace_entry(__func__, __LINE__, -1)
#define FUNC_ENTRY_MED StackTrace_entry(__func__, __LINE__, TRACE_MEDIUM)
#define FUNC_ENTRY_MAX StackTrace_entry(__func__, __LINE__, TRACE_MAXIMUM)
#define FUNC_EXIT StackTrace_exit(__func__, __LINE__, NULL, TRACE_MINIMUM)
#define FUNC_EXIT_NOLOG StackTrace_exit(__func__, __LINE__, NULL, -1)
#define FUNC_EXIT_MED StackTrace_exit(__func__, __LINE__, NULL, TRACE_MEDIUM)
#define FUNC_EXIT_MAX StackTrace_exit(__func__, __LINE__, NULL, TRACE_MAXIMUM)
#define FUNC_EXIT_RC(x) StackTrace_exit(__func__, __LINE__, &x, TRACE_MINIMUM)
#define FUNC_EXIT_MED_RC(x) StackTrace_exit(__func__, __LINE__, &x, TRACE_MEDIUM)
#define FUNC_EXIT_MAX_RC(x) StackTrace_exit(__func__, __LINE__, &x, TRACE_MAXIMUM)
#endif
#endif

void StackTrace_entry(const char* name, int line, int trace);
void StackTrace_exit(const char* name, int line, void* return_value, int trace);

void StackTrace_printStack(FILE* dest);
char* StackTrace_get(thread_id_type);

#endif /* STACKTRACE_H_ */
