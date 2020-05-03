#include "Control.h"
#include "Sensor.h"
#include "Arduino.h"

Sensor sensor;
Control control;

void setup() {
    sensor.init();
    control.init();
}

void loop() {
    sensor.scan();
    //control.set_1st_servos_zero();
    //control.set_2nd_servos_zero();
    //control.set_initial_position();
    control.walk();
}