#ifndef __WIPER_FUNCTIONS_SEEN
#define __WIPER_FUNCTIONS_SEEN

<<<<<<< HEAD
//#include "wiper_functions.c"
// Header functions aren't for this...
=======
#define LED_ON HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET)
#define LED_OFF HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET)
#define Button_Pressed (HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13) == 0)
>>>>>>> 02b9cfaa48da19ee002986aaae49f721296a6b96

uint32_t Get_Time(void);
void Blink_Timed(uint32_t blink_interval);

#endif
