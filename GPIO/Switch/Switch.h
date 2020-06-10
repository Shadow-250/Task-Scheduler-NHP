/*
 * Switch.h
 *
 * Created on: Jun 10 , 2020
 * @author: NHP - Nguyen Hoang Phung
 * id: 1710246
 * github: Shadow-250
 */

#ifndef SWITCH_SWITCH_H_
#define SWITCH_SWITCH_H_

#define SW_GPIO_BASE       GPIO_PORTF_BASE
#define SW1            GPIO_PIN_4
#define SW2            GPIO_PIN_0
typedef     enum {PRESSED,RELEASED}  sw_t;
void        switchInit(void);

sw_t        switchState(int SWnumber);

/* SWITCH_SWITCH_H_ */
#endif
