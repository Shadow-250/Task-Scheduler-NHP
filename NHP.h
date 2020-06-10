/*
 * NHP.h
 *
 * Created on: Jun 10 , 2020
 * @author: NHP - Nguyen Hoang Phung
 * id: 1710246
 * Shadow-250
 */

#ifndef INCLUDES_H_
#define INCLUDES_H_

// Standard lib in c support math and string, ...
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

// Libs for Driver
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"
#include "driverlib/pin_map.h"
#include "driverlib/timer.h"
#include "driverlib/interrupt.h"
#include "driverlib/uart.h"
#include "driverlib/systick.h"
#include "utils/scheduler.h"

//Support hardwave Lib
#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "inc/hw_gpio.h"


//=======================================================================
#include"GPIO/Switch/Switch.h"
#include"GPIO/Led/Led.h"
#include "RGBState/RGBState.h"
#include "Task_Scheduler/Task/Task1.h"
#include "Task_Scheduler/Task/Task2.h"
#include "Task_Scheduler/Task/Task3.h"
#include "Task_Scheduler/Scheduler/scheduler.h"
extern uint32_t RGB_TimerCount;


#endif /* INCLUDES_H_ */
