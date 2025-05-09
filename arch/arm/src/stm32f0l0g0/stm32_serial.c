/****************************************************************************
 * arch/arm/src/stm32f0l0g0/stm32_serial.c
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "chip.h"

/* This file is only a thin shell that includes the correct serial
 * implementation for the selected STM32 IP core:
 *   - STM32 UART IP version 1 - F0, L0
 *   - STM32 UART IP version 2 - G0
 */

#if defined(CONFIG_STM32F0L0G0_HAVE_IP_USART_V1)
#  include "stm32_serial_v1.c"
#elif defined(CONFIG_STM32F0L0G0_HAVE_IP_USART_V2)
#  include "stm32_serial_v2.c"
#else
#  error "Unsupported STM32 M0 serial"
#endif

/****************************************************************************
 * Public Functions
 ****************************************************************************/
