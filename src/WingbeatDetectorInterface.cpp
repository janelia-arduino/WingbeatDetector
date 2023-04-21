// ----------------------------------------------------------------------------
// WingbeatDetectorInterface.cpp
//
// Authors:
// Peter Polidoro peter@polidoro.io
// ----------------------------------------------------------------------------
#include "WingbeatDetectorInterface.h"


void WingbeatDetectorInterface::setLedEnablePin(size_t led_enable_pin)
{
  led_enable_pin_ = led_enable_pin;
  pinMode(led_enable_pin_, OUTPUT);
}

void WingbeatDetectorInterface::setLedBlinkFrequency(size_t led_blink_frequency)
{
  analogWriteFrequency(led_enable_pin_, led_blink_frequency);
}

void WingbeatDetectorInterface::blinkLed()
{
  analogWrite(led_enable_pin_, 128);
}
