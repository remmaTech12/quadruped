#ifndef Control_h
#define Control_h
#include <Servo.h>

#define SERVO_LU1 2
#define SERVO_RU1 3
#define SERVO_LD1 4
#define SERVO_RD1 5

#define SERVO_LU2 6
#define SERVO_RU2 7
#define SERVO_LD2 8
#define SERVO_RD2 9

class Control {
   public:
    Servo servo_lu1;
    Servo servo_ru1;
    Servo servo_ld1;
    Servo servo_rd1;

    Servo servo_lu2;
    Servo servo_ru2;
    Servo servo_ld2;
    Servo servo_rd2;
    Control();

    void init();
    void walk();
    void set_1st_servos_zero();
    void set_2nd_servos_zero();
    void set_initial_position();

   private:
    void step1();
    void step2();
    void step3();
    void step4();
    void step5();
    void step6();

    int wait_time = 1000;
};

#endif // #ifndef Control_h