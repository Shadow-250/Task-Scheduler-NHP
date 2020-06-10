/*
 * Led.c
 *
 * Created on: Jun 10 , 2020
 * @author: NHP - Nguyen Hoang Phung
 * id: 1710246
 * github: Shadow-250
 */

#include "Led.h"
#include "../../NHP.h"

const uint32_t      ledSetVal[3] = {1<<1,1<<2,1<<3};
const   uint32_t    ledPin[3]   =   {GPIO_INT_PIN_1,GPIO_INT_PIN_2,GPIO_INT_PIN_3};
void ledInit(void)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOOutput(LED_GPIO_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3);

}
void    ledControl(enum ledNumber led, enum ledState State)
{
    if (State)  GPIOPinWrite(LED_GPIO_BASE,ledPin[led], ledPin[led]);
    else GPIOPinWrite(LED_GPIO_BASE,ledPin[led], 0);
}
