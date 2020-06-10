/*
 * Task2.c
 *
 * Created on: Jun 10 , 2020
 * @author: NHP - Nguyen Hoang Phung
 * id: 1710246
 * Shadow-250
 */

#include "../../NHP.h"
#include "Task2.h"

void Task2(void *myobject)
{
    Task2Update();
}
void Task2Update(void)
{
    if(switchState(1) == PRESSED)
    {
        RGB_TimerCount = 0;
    }

}
