/*
 * RGBState.h
 *
 * Created on: Jun 10 , 2020
 * @author: NHP - Nguyen Hoang Phung
 * id: 1710246
 * github: Shadow-250
 */


#ifndef RGBSTATE_RGBSTATE_H_
#define RGBSTATE_RGBSTATE_H_
#include "../../NHP.h"
//Define State of Color LED
typedef enum
{
    S_GREEN,
    S_GREEN_WAIT,
    S_BLUE,
    S_BLUE_WAIT,
    S_RED,
    S_RED_WAIT
} RGB_t;
//Control Color Three LED
void RGBControl (enum ledState GREEN,enum ledState BLUE,enum ledState RED);
//Update State Color LED
void RGBMachineUpdate (void);
//Initial RGBLED
void initRGBState (void);



#endif /* RGBSTATE_RGBSTATE_H_ */
