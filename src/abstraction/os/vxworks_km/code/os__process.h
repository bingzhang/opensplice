/*
 *                         Vortex OpenSplice
 *
 *   This software and documentation are Copyright 2006 to TO_YEAR ADLINK
 *   Technology Limited, its affiliated companies and licensors. All rights
 *   reserved.
 *
 *   Licensed under the ADLINK Software License Agreement Rev 2.7 2nd October
 *   2014 (the "License"); you may not use this file except in compliance with
 *   the License.
 *   You may obtain a copy of the License at:
 *                      $OSPL_HOME/LICENSE
 *
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */

#ifndef OS_VXWORKS__PROCESS_H
#define OS_VXWORKS__PROCESS_H

#if defined (__cplusplus)
extern "C" {
#endif


os_result os_procRegisterThread(os_procContextData process_procContextData);
os_result os_procRegisterHookThread(os_procContextData process_procContextData,
                                os_threadContextData process_threadContextData);


#if defined (__cplusplus)
}
#endif

#endif /* OS_VXWORKS__PROCESS_H */
