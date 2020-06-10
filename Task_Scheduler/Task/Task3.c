/*
 * Task3.c
 *
 * Created on: Jun 10 , 2020
 * @author: NHP - Nguyen Hoang Phung
 * id: 1710246
 * Shadow-250
 */

#ifndef TASK_TASK3_C_
#define TASK_TASK3_C_

#include "../../NHP.h"
#include "Task3.h"
extern uint32_t RGB_TimerCount;

void Task3(void *myobject){
    Task3Update();
}
void Task3Update(void){
    if(switchState(2)==PRESSED){
        RGB_TimerCount+=5000;
    }
}

#endif /* TASK_TASK3_C_ */
