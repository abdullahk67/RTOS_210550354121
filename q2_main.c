#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"


void task1(void *data)
{
   while(1)
   {
       printf("Task1 started with periodicity of 1000\n");
       vTaskDelay(1000 / portTICK_PERIOD_MS);
   }
}

void task2(void *data)
{
   while(1)
   {
       printf("Task2 started with periodicity of 2000\n");
       vTaskDelay(2000 / portTICK_PERIOD_MS);
   }
}
void task3(void *data)
{
   while(1)
   {
       printf("Task3 started with periodicity of 5000\n");
       vTaskDelay(5000 / portTICK_PERIOD_MS);
   }
}


void app_main(void)
{ 
   
    xTaskCreate(task1, "task1", 1024, NULL, 1, NULL);
    xTaskCreate(task2, "task2", 1024, NULL, 2, NULL);
    xTaskCreate(task3, "task3", 1024, NULL, 3, NULL);
   
}
