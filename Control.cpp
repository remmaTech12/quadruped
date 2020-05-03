#include "Control.h"
#include "Arduino.h"

Control::Control() {}

void Control::init() {
    servo_lu1.attach(SERVO_LU1);
    servo_ru1.attach(SERVO_RU1);
    servo_ld1.attach(SERVO_LD1);
    servo_rd1.attach(SERVO_RD1);

    servo_lu2.attach(SERVO_LU2);
    servo_ru2.attach(SERVO_RU2);
    servo_ld2.attach(SERVO_LD2);
    servo_rd2.attach(SERVO_RD2);

    servo_lu1.write(45);
    servo_ru1.write(0);
    servo_ld1.write(45);
    servo_rd1.write(90);
    
    servo_lu2.write(45);
    servo_ru2.write(45);
    servo_ld2.write(45);
    servo_rd2.write(45);
}

void Control::walk() {
    step1();
    step2();
    step3();
    step4();
    step5();
    step6();
 }

void Control::step1() {
    servo_lu1.write(45);
    servo_ru1.write(60);
    servo_ld1.write(45);
    servo_rd1.write(90);

    servo_lu2.write(45);
    servo_ru2.write(0);
    servo_ld2.write(45);
    servo_rd2.write(45);
    delay(wait_time);
}

void Control::step2() {
    servo_lu1.write(90);
    servo_ru1.write(45);
    servo_ld1.write(60);
    servo_rd1.write(45);

    servo_lu2.write(45);
    servo_ru2.write(0);
    servo_ld2.write(45);
    servo_rd2.write(45);
    delay(wait_time);
}

void Control::step3() {
    servo_lu1.write(90);
    servo_ru1.write(45);
    servo_ld1.write(0);
    servo_rd1.write(45);

    servo_lu2.write(45);
    servo_ru2.write(45);
    servo_ld2.write(0);
    servo_rd2.write(45);
    delay(wait_time);
}

void Control::step4() {
    servo_lu1.write(30);
    servo_ru1.write(45);
    servo_ld1.write(0);
    servo_rd1.write(45);

    servo_lu2.write(90);
    servo_ru2.write(45);
    servo_ld2.write(45);
    servo_rd2.write(45);
    delay(wait_time);
}

void Control::step5() {
    servo_lu1.write(45);
    servo_ru1.write(0);
    servo_ld1.write(45);
    servo_rd1.write(30);

    servo_lu2.write(90);
    servo_ru2.write(45);
    servo_ld2.write(45);
    servo_rd2.write(45);
    delay(wait_time);
}

void Control::step6() {
    servo_lu1.write(45);
    servo_ru1.write(0);
    servo_ld1.write(45);
    servo_rd1.write(90);

    servo_lu2.write(45);
    servo_ru2.write(45);
    servo_ld2.write(45);
    servo_rd2.write(90);
    delay(wait_time);
}

void Control::set_1st_servos_zero() {
    servo_lu1.write(45);
    servo_ru1.write(45);
    servo_ld1.write(45);
    servo_rd1.write(45);
    delay(wait_time);
}

void Control::set_2nd_servos_zero() {
    servo_lu2.write(45);
    servo_ru2.write(45);
    servo_ld2.write(45);
    servo_rd2.write(45);
    delay(1000);
}

void Control::set_initial_position() {
    servo_lu1.write(45);
    servo_ru1.write(45);
    servo_ld1.write(45);
    servo_rd1.write(45);
    servo_lu2.write(45);
    servo_ru2.write(45);
    servo_ld2.write(45);
    servo_rd2.write(45);
    delay(1000);
}