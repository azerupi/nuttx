############################################################################
# boards/arm/max326xx/max32660-evsys/src/Makefile
#
# SPDX-License-Identifier: Apache-2.0
#
# Licensed to the Apache Software Foundation (ASF) under one or more
# contributor license agreements.  See the NOTICE file distributed with
# this work for additional information regarding copyright ownership.  The
# ASF licenses this file to you under the Apache License, Version 2.0 (the
# "License"); you may not use this file except in compliance with the
# License.  You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
# WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
# License for the specific language governing permissions and limitations
# under the License.
#
############################################################################

include $(TOPDIR)/Make.defs

CSRCS = max326_boot.c

ifeq ($(CONFIG_BOARDCTL),y)
CSRCS += max326_appinit.c max326_bringup.c
else ifeq ($(CONFIG_BOARD_LATE_INITIALIZE),y)
CSRCS += max326_bringup.c
endif

ifeq ($(CONFIG_ARCH_LEDS),y)
CSRCS += max326_autoleds.c
else
CSRCS += max326_userleds.c
endif

ifeq ($(CONFIG_ARCH_BUTTONS),y)
CSRCS += max326_button.c
endif

ifeq ($(CONFIG_MAX326XX_HAVE_SPIM),y)
CSRCS += max326_spi.c
endif

ifeq ($(CONFIG_MMCSD_SPI),y)
CSRCS += max326_mmcsd.c
endif

include $(TOPDIR)/boards/Board.mk
