#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

/* create a config structure */
GPIO_InitTypeDef LEDS;
GPIO_InitTypeDef push_button;

int main(void)
{
   HAL_Init();

   /* we need to enable the GPIOA port's clock first */
   __HAL_RCC_GPIOF_CLK_ENABLE();
   __HAL_RCC_GPIOB_CLK_ENABLE();


     push_button.Pin = GPIO_PIN_4;            /* this is about PIN 10 */
     push_button.Mode = GPIO_MODE_INPUT;            /* configure as input */
     /* we don't need internal pull-up or -down resistor, we use an external one */
     push_button.Pull = GPIO_NOPULL;
     push_button.Speed = GPIO_SPEED_HIGH;        /* high-speed */

     HAL_GPIO_Init(GPIOB, &push_button);            /* initialize the pin on GPIOF port */


   LEDS.Pin = GPIO_PIN_9 | GPIO_PIN_10 | GPIO_PIN_7 | GPIO_PIN_8;    /* setting up 2 pins at once with | operator */
   LEDS.Mode = GPIO_MODE_OUTPUT_PP;        /* configure as output, in push-pull mode */
   LEDS.Pull = GPIO_NOPULL;            /* we don't need internal pull-up or -down resistor */
   LEDS.Speed = GPIO_SPEED_HIGH;        /* we need a high-speed output */

   HAL_GPIO_Init(GPIOF, &LEDS);        /* initialize the pin on GPIOF port */
   int led_index = 0;
   while (1) {
       if (HAL_GPIO_ReadPin(GPIOB, push_button.Pin)) {
             led_index++;
             HAL_Delay(100);
       }
       if(led_index%4 == 1){
           HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
           HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_SET);
       }
       if(led_index%4 == 2){
           HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_RESET);
           HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_SET);
       }
       if(led_index%4 == 3){
           HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_RESET);
           HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET);
       }
       if(led_index%4 == 0){
           HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);
           HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
       }
   }
}
