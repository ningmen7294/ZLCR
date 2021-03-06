/**
 * @file    ZLCR_beta_core.h
 * @author  TIANLAN <yitiandelan@outlook.com>
 * @date    2018-JUN-3
 * @brief   
 *
 * Copyright (c) 2016-2018, TIANLAN.tech
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef _ZLCR_BETA_CORE_H
#define _ZLCR_BETA_CORE_H

void ZLCR_Init(void);
void ZLCR_DeInit(void);
void ZLCR_IDLE(void);
void ZLCR_ISR(unsigned short *txbuf, unsigned short *rxbuf, unsigned short offset, unsigned short size);

void ZLCR_Setfreq(float *freq);
void ZLCR_Getfreq(float *freq);

#endif
