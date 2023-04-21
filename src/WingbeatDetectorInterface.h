// ----------------------------------------------------------------------------
// WingbeatDetectorInterface.h
//
// Authors:
// Peter Polidoro peter@polidoro.io
// ----------------------------------------------------------------------------

#ifndef WingbeatDetectorInterface_H
#define WingbeatDetectorInterface_H
#include <Arduino.h>


class WingbeatDetectorInterface
{
public:
  void setLedEnablePin(size_t led_enable_pin);
  void setLedBlinkFrequency(size_t led_blink_frequency);
  void blinkLed();
private:
  size_t led_enable_pin_;
};

#endif
