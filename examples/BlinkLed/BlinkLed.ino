#include <Arduino.h>
#include <WingbeatDetectorInterface.h>

const size_t LED_ENABLE_PIN = 0;

WingbeatDetectorInterface wdi;

void setup()
{
  wdi.setLedEnablePin(LED_ENABLE_PIN);
  wdi.setLedBlinkFrequency(200);
  wdi.blinkLed();
}

void loop()
{
}
