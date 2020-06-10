/*
 * Led.h
 *
 * Created on: Jun 10 , 2020
 * @author: NHP - Nguyen Hoang Phung
 * id: 1710246
 * github: Shadow-250
 */

#ifndef LED_LED_H_
#define LED_LED_H_

#define LED_GPIO_BASE       GPIO_PORTF_BASE


enum ledNumber {LEDRED = 0, LEDBLUE, LEDGREEN};
enum ledState  {OFF=0,ON=1};
void ledInit(void);
void ledControl(enum ledNumber led, enum ledState State);

#endif /* LED_LED_H_ */
