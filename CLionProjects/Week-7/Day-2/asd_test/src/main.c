#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
#include <math.h>

/* necessary include files */
#include "stm32746g_discovery_ts.h"
#include "stm32746g_discovery_lcd.h"

static void Error_Handler(void);
static void SystemClock_Config(void);

GPIO_InitTypeDef LEDS;
GPIO_InitTypeDef push_button;
TS_StateTypeDef  TS_State;
TS_StateTypeDef ts;

/* FUNCTION DECLARATIONS */
int is_p_in_the_circle(int p_x, int p_y, int c_x, int c_y, int radius);

int main(void)
{
	HAL_Init();
	SystemClock_Config();

	 /* INITIALIZING LCD */
	BSP_LCD_Init();
	BSP_LCD_LayerDefaultInit(1, LCD_FB_START_ADDRESS);
	BSP_LCD_SelectLayer(1);
	BSP_LCD_SetFont(&LCD_DEFAULT_FONT);
	BSP_LCD_SetBackColor(LCD_COLOR_WHITE);
	BSP_LCD_Clear(LCD_COLOR_WHITE);




	/* INITIALIZING TOUCH SCREEN */

	BSP_TS_Init (BSP_LCD_GetXSize(), BSP_LCD_GetYSize());



	/* INITIALIZING BASIC BOARD LED AND BUTTON */
    BSP_LED_Init(LED1);
    BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

    __HAL_RCC_RNG_CLK_ENABLE();

    RNG_HandleTypeDef rng_handle;
    rng_handle.Instance = RNG;
    HAL_RNG_Init(&rng_handle);

	/* END OF INITIALIZATION */
	int game_status = 1;			/* 1 -is for OFF, 0 -is for ON */
	int tc_input_state = 1;
	char* welcome = "PRESS BUTTON TO START!";
	while(1){
		while(game_status == 1){	/* PREGAME */
			BSP_LCD_DisplayStringAt(0, BSP_LCD_GetYSize()/2, (uint8_t*)welcome, CENTER_MODE);
			BSP_LED_On(LED1);
			HAL_Delay(1000);
			BSP_LED_Off(LED1);
			HAL_Delay(1000);
			if(BSP_PB_GetState(BUTTON_KEY)){
				game_status = 0;
				BSP_LED_Off(LED1);
				HAL_Delay(500);
				}
			}
		BSP_LCD_SetBackColor(LCD_COLOR_GREEN);
    	BSP_LCD_Clear(LCD_COLOR_GREEN);
    	while (game_status == 0) {	/* GAME MODE */
    		BSP_LCD_Clear(LCD_COLOR_GREEN);
    		tc_input_state = 1;
    		int circle_x = 30 + HAL_RNG_GetRandomNumber(&rng_handle) % (BSP_LCD_GetXSize()-60);
    		int circle_y = 30 + HAL_RNG_GetRandomNumber(&rng_handle) % (BSP_LCD_GetYSize()-60);
    		BSP_LCD_SetTextColor(LCD_COLOR_RED);
    		BSP_LCD_FillCircle(circle_x, circle_y, 30);
    		while(tc_input_state == 1){
    			BSP_TS_GetState(&TS_State);
    			int touch_x = TS_State.touchX[0];
    			int touch_y = TS_State.touchY[0];
    			if(is_p_in_the_circle(touch_x, touch_y, circle_x, circle_y, 30) == 1){
    				tc_input_state = 0;
    			}
    		}
    	}
    	BSP_LCD_SetBackColor(LCD_COLOR_WHITE);
    	BSP_LCD_Clear(LCD_COLOR_WHITE);
	}
}

int is_p_in_the_circle(int p_x, int p_y, int c_x, int c_y, int radius){
	if(radius >= sqrt(pow(p_x-c_x, 2) + pow(p_y-c_y, 2))) {
		return 1;
	}else{
	return 0;
	}
}
static void Error_Handler(void)
{}

static void SystemClock_Config(void)
{
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

    /**Configure the main internal regulator output voltage */
    __HAL_RCC_PWR_CLK_ENABLE();
    __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

    /**Initializes the CPU, AHB and APB busses clocks */
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
    RCC_OscInitStruct.HSIState = RCC_HSI_ON;
    RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
    RCC_OscInitStruct.PLL.PLLM = 8;
    RCC_OscInitStruct.PLL.PLLN = 216;
    RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
    RCC_OscInitStruct.PLL.PLLQ = 2;

    if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
        Error_Handler();
    }

    /**Activate the Over-Drive mode */
    if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
        Error_Handler();
    }

    /**Initializes the CPU, AHB and APB busses clocks */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
        Error_Handler();
    }
}

#ifdef  USE_FULL_ASSERT
void assert_failed(uint8_t *file, uint32_t line){}
#endif
