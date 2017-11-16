//This program will have the dev borad LED turn on 
//when the Dev board button is pressed

#define LED_ON HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET)
#define LED_OFF HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET)
#define Button_Pressed (HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13)) == 0


void On_When_Pushed(void){

    if(Button_Pressed){
      LED_ON;
    } else {
      LED_OFF;
    }
}
    