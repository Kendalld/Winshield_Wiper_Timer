#include "wiper_functions.h"

//This program will have the dev borad LED turn on 
//when the Dev board button is pressed
#include "wiper_functions.h"

void On_When_Pushed(void){

    if(Button_Pressed){
      LED_ON;
    } else {
      LED_OFF;
    }
}


void Blink_Once(void){
	LED_ON;
	HAL_Delay(150);
	LED_OFF;
    }

void Blink_Timed(uint32_t blink_interval){
	LED_ON;
	HAL_Delay(blink_interval);
	LED_OFF;
    }
/*
1. Program reload value.
2. Clear current value.
3. Program Control and Status register
*/


//Get time between button presses
uint32_t Get_Time(void){

	uint32_t press_count = 1; //The button has been pressed one to get into the program
	uint32_t timer_interval = 0; //uwTick is a global variable. This would be the local equivalent

	Blink_Once(); // run the "wiper blade" once as soon as the button is pressed

	do {
		HAL_IncTick();
		if (Button_Pressed){// I'm sure there is a cleaner way to do this later.
				press_count++;
		}
	} while(press_count < 2);
 
 	 
 	timer_interval = HAL_GetTick();
 	return timer_interval;
}	

/*Junk code!
	uint32_t timer_interval_start = uwTick; 
		//timer_interval_start = uwTick;
		//timer_interval = HAL_IncTick();
	*/
