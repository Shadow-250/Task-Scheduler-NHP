/*
 * Task.c
 *
 * Created on: Jun 10 , 2020
 * @author: NHP - Nguyen Hoang Phung
 * id: 1710246
 * Shadow-250
 */

#include "../../NHP.h"

tSchedulerTask     g_psSchedulerTable[3] = {{Task1,0,50,0,1},{Task2,(void*)0,50,1,1},{Task3,(void*)0,50,2,1}};
uint32_t g_ui32SchedulerNumTasks = 3;
