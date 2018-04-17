#pragma config(Sensor, in1,    pwrExp,         sensorAnalog)
#pragma config(Sensor, dgtl1,  quad,           sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  limit,          sensorTouch)
#pragma config(Sensor, dgtl4,  bump,           sensorTouch)
#pragma config(Sensor, dgtl5,  ledGreen,       sensorLEDtoVCC)
#pragma config(Sensor, dgtl6,  ledYellow,      sensorLEDtoVCC)
#pragma config(Sensor, dgtl7,  ledRed,         sensorLEDtoVCC)
#pragma config(Sensor, dgtl8,  jumper,         sensorTouch)
#pragma config(Sensor, dgtl11, ultrasonic,     sensorSONAR_inch)
#pragma config(Motor,  port5,           drive1,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           drive2,        tmotorVex393_MC29, openLoop, reversed)
task main()
{
motor[drive1] = 127;
motor[drive2] = 127;
wait1Msec(3000);
motor[drive1] = 63;
motor[drive2] = 63;
wait1Msec(3000);
motor[drive1] = 32;
motor[drive2] = 32;
wait1Msec(3000);
motor[drive1] = 0;
motor[drive2] = 0;
}
