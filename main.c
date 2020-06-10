/*
 * main.c
 *
 * Created on: Jun 10 , 2020
 * @author: NHP - Nguyen Hoang Phung
 * id: 1710246
 * Shadow-250
 */


#include "NHP.h"

int main(void)
{

    SysCtlClockSet(SYSCTL_SYSDIV_1 | SYSCTL_USE_OSC | SYSCTL_OSC_MAIN |SYSCTL_XTAL_16MHZ);
    switchInit();
    ledInit();
    initRGBState();
    SchedulerInit(1000);    // systick is 1 ms
    while(1)
    {
       SchedulerRun();
    }
}
