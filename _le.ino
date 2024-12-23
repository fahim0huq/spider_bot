#include <Servo.h>   

Servo servo[4][3];

//define servos' ports
const int servo_pin[4][3] = { {2, 3, 4}, {A5, A4, A3}, {8, 9, 10}, {A0, A2, A1} }; // {Femur, Tibia, Coxa}

void setup()
{
  //initialize all servos
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      servo[i][j].attach(servo_pin[i][j]);
      delay(20);
    }
  }
}

void loop(void)
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      servo[i][j].write(90);
      delay(20);
    }
  }
}
