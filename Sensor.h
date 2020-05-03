#ifndef Sensor_h
#define Sensor_h
#include "IRremote.h"
#include "Arduino.h"

#define IR_PIN 13

class Sensor {
   public:
    Sensor();

    void init();
    void translate_IR();
    void scan();

   private:
    decode_results results;
};

#endif  // #ifndef Sensor_h