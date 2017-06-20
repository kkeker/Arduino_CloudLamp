#include <Arduino_FreeRTOS.h>

void TaskLed1( void *pvParameters );
void TaskLed2( void *pvParameters );
void TaskLed3( void *pvParameters );
void TaskLed4( void *pvParameters );
void TaskLed5( void *pvParameters );

void setup() {

  xTaskCreate(
    TaskLed1
    ,  (const portCHAR *)"LED1"
    ,  128
    ,  NULL
    ,  1
    ,  NULL );

  xTaskCreate(
    TaskLed2
    ,  (const portCHAR *)"LED2"
    ,  128
    ,  NULL
    ,  1
    ,  NULL );

  xTaskCreate(
    TaskLed3
    ,  (const portCHAR *)"LED3"
    ,  128
    ,  NULL
    ,  1
    ,  NULL );

  xTaskCreate(
    TaskLed4
    ,  (const portCHAR *)"LED4"
    ,  128
    ,  NULL
    ,  1
    ,  NULL );

  xTaskCreate(
    TaskLed5
    ,  (const portCHAR *)"LED5"
    ,  128
    ,  NULL
    ,  1
    ,  NULL );
}

void loop() {}

void TaskLed1(void *pvParameters)
{
  (void) pvParameters;

  int R = 2;
  int G = 3;
  int B = 4;

  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

  for (;;)
  {
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
    vTaskDelay( 50 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 500 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 255);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 500 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
    vTaskDelay( 30 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 5000 / portTICK_PERIOD_MS );
  }
}

void TaskLed2(void *pvParameters)
{
  (void) pvParameters;

  int R = 5;
  int G = 6;
  int B = 7;

  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

  for (;;)
  {
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
    vTaskDelay( 50 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 1000 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 255);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 500 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
    vTaskDelay( 30 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 5000 / portTICK_PERIOD_MS );
  }
}

void TaskLed3(void *pvParameters)
{
  (void) pvParameters;

  int R = 8;
  int G = 9;
  int B = 10;

  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

  for (;;)
  {
    analogWrite(R, 0);
    analogWrite(G, 255);
    analogWrite(B, 255);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 1000 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 255);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 500 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 255);
    analogWrite(B, 0);
    vTaskDelay( 30 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 5000 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 255);
    analogWrite(B, 255);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 7000 / portTICK_PERIOD_MS );
  }
}

void TaskLed4(void *pvParameters)
{
  (void) pvParameters;

  int R = 11;
  int G = 12;
  int B = 13;

  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

  for (;;)
  {
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
    vTaskDelay( 50 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 50 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 255);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 500 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 255);
    analogWrite(B, 255);
    vTaskDelay( 30 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 5000 / portTICK_PERIOD_MS );
    analogWrite(R, 255);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 50 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 7000 / portTICK_PERIOD_MS );
  }
}

void TaskLed5(void *pvParameters)
{
  (void) pvParameters;

  int R = 14;
  int G = 15;
  int B = 16;

  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

  for (;;)
  {
    analogWrite(R, 0);
    analogWrite(G, 255);
    analogWrite(B, 0);
    vTaskDelay( 50 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 1000 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 255);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 500 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 255);
    analogWrite(B, 255);
    vTaskDelay( 100 / portTICK_PERIOD_MS );
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 0);
    vTaskDelay( 5000 / portTICK_PERIOD_MS );
  }
}
