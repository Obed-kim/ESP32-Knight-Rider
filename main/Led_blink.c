#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED1 2
#define LED2 4
#define LED3 5
#define LED4 18
#define LED5 19

void app_main(void)
{
    // Set all LEDs as output
    gpio_set_direction(LED1, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED2, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED3, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED4, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED5, GPIO_MODE_OUTPUT);

    while (1) {
        // Forward direction
        gpio_set_level(LED1, 1); vTaskDelay(150 / portTICK_PERIOD_MS); gpio_set_level(LED1, 0);
        gpio_set_level(LED2, 1); vTaskDelay(150 / portTICK_PERIOD_MS); gpio_set_level(LED2, 0);
        gpio_set_level(LED3, 1); vTaskDelay(150 / portTICK_PERIOD_MS); gpio_set_level(LED3, 0);
        gpio_set_level(LED4, 1); vTaskDelay(150 / portTICK_PERIOD_MS); gpio_set_level(LED4, 0);
        gpio_set_level(LED5, 1); vTaskDelay(150 / portTICK_PERIOD_MS); gpio_set_level(LED5, 0);

        // Reverse direction
        gpio_set_level(LED4, 1); vTaskDelay(150 / portTICK_PERIOD_MS); gpio_set_level(LED4, 0);
        gpio_set_level(LED3, 1); vTaskDelay(150 / portTICK_PERIOD_MS); gpio_set_level(LED3, 0);
        gpio_set_level(LED2, 1); vTaskDelay(150 / portTICK_PERIOD_MS); gpio_set_level(LED2, 0);
    }
}
