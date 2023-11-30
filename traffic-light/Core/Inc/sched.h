/*
 * shed.h
 *
 *  Created on: Nov 29, 2023
 *      Author: Admin
 */

#ifndef INC_SCHED_H_
#define INC_SCHED_H_

#include "main.h"
#include "sched_llist.h"

typedef void (*CALLBACK)(void);

void SCH_Init();

void SCH_Add_Task(CALLBACK callback, uint16_t Delay, uint16_t Period);

void SCH_Report_Status();

void SCH_Go_to_Sleep();

void SCH_Update();

void SCH_Dispatch_Tasks();


#endif /* INC_SCHED_H_ */
