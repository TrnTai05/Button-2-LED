#include <Arduino.h>
#include "LED.h"
#include <OneButton.h>
#define LED_PIN 4   
#define LED_ACT LOW    
#define BTN_PIN 21     
#define BTN_ACT LOW 
LED led(LED_PIN, LED_ACT);
void btnPush();
void btnDoubleClick();
OneButton button(BTN_PIN, !BTN_ACT);
void setup()
{
    led.off();
    button.attachClick(btnPush);               
    button.attachDoubleClick(btnDoubleClick); 
}
void loop()
{
    led.loop();
    button.tick();
}

void btnPush()
{
    led.flip();
}

void btnDoubleClick()
{
    led.blink(250);
}