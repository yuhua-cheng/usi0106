/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : PPG1.h
**     Project     : USI-0106
**     Processor   : MKL04Z32VFK4
**     Component   : PPG_LDD
**     Version     : Component 01.015, Driver 01.03, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-01-19, 16:57, # CodeGen: 2
**     Abstract    :
**          This component implements a programmable pulse generator that
**          generates signal with variable duty and variable cycle (period).
**     Settings    :
**          Component name                                 : PPG1
**          Module name                                    : TPM0
**          Counter                                        : TPM0_CNT
**          Period device                                  : TPM0_MOD
**          Duty device                                    : TPM0_C0V
**          Output pin                                     : ADC0_SE8/PTB11/TPM0_CH0
**          Output pin signal                              : 
**          Interrupt service/event                        : Disabled
**          Period                                         : 500 kHz
**          Starting pulse width                           : 1 ?s
**          Initial polarity                               : low
**          Initialization                                 : 
**            Enabled in init. code                        : yes
**            Auto initialization                          : yes
**            Event mask                                   : 
**              OnEnd                                      : Disabled
**          CPU clock/configuration selection              : 
**            Clock configuration 0                        : This component enabled
**            Clock configuration 1                        : This component disabled
**            Clock configuration 2                        : This component disabled
**            Clock configuration 3                        : This component disabled
**            Clock configuration 4                        : This component disabled
**            Clock configuration 5                        : This component disabled
**            Clock configuration 6                        : This component disabled
**            Clock configuration 7                        : This component disabled
**     Contents    :
**         Init - LDD_TDeviceData* PPG1_Init(LDD_TUserData *UserDataPtr);
**
**     Copyright : 1997 - 2014 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file PPG1.h
** @version 01.03
** @brief
**          This component implements a programmable pulse generator that
**          generates signal with variable duty and variable cycle (period).
*/         
/*!
**  @addtogroup PPG1_module PPG1 module documentation
**  @{
*/         

#ifndef __PPG1_H
#define __PPG1_H

/* MODULE PPG1. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */

#include "TPM_PDD.h"
#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif 

#define PPG1_PERIOD_TICKS  0x20UL      /* Initial period value in ticks of the timer. */
#define PPG1_PERIOD_TICKS_0 0x20UL     /* Period value in ticks of the timer in clock configuration 0. */
/*! Peripheral base address of a device allocated by the component. This constant can be used directly in PDD macros. */
#define PPG1_PRPH_BASE_ADDRESS  0x40038000U
  
/*! Device data structure pointer used when auto initialization property is enabled. This constant can be passed as a first parameter to all component's methods. */
#define PPG1_DeviceData  ((LDD_TDeviceData *)PE_LDD_GetDeviceStructure(PE_LDD_COMPONENT_PPG1_ID))

/* Methods configuration constants - generated for all enabled component's methods */
#define PPG1_Init_METHOD_ENABLED       /*!< Init method of the component PPG1 is enabled (generated) */

/* Events configuration constants - generated for all enabled component's events */



/*
** ===================================================================
**     Method      :  PPG1_Init (component PPG_LDD)
*/
/*!
**     @brief
**         Initializes the device. Allocates memory for the device data
**         structure, allocates interrupt vectors and sets interrupt
**         priority, sets pin routing, sets timing, etc. If the
**         property ["Enable in init. code"] is set to "yes" value then
**         the device is also enabled (see the description of the
**         [Enable] method). In this case the [Enable] method is not
**         necessary and needn't to be generated. This method can be
**         called only once. Before the second call of Init the [Deinit]
**         must be called first.
**     @param
**         UserDataPtr     - Pointer to the user or
**                           RTOS specific data. This pointer will be
**                           passed as an event or callback parameter.
**     @return
**                         - Pointer to the dynamically allocated private
**                           structure or NULL if there was an error.
*/
/* ===================================================================*/
LDD_TDeviceData* PPG1_Init(LDD_TUserData *UserDataPtr);

/* END PPG1. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __PPG1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.09]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/