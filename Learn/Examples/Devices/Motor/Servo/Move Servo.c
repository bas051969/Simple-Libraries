/*
  Move Servo.c
  
  Moves servo to 0, 90 and 180 degrees.  Holds each position for 2 s.
  Connect servo to P18 port on Propeller BOE.
  
  http://learn.parallax.com/C/Simple-Devices-Propeller-C/Move-Servo
*/

#include "simpletools.h"                      // Include simpletools header
#include "servo.h"                            // Include servo header

int main()                                    // Main function
{
  servo_angle(16, 0);                         // P18 servo to 0 degrees
  pause(3000);                                // ...for 3 seconds
  servo_angle(16, 900);                       // P18 servo to 90 degrees
  pause(3000);                                // ...for 3 seconds
  servo_angle(16, 1800);                      // P18 servo to 180 degrees
  pause(3000);                                // ...for 3 seconds
  servo_stop();                               // Stop servo process
}

