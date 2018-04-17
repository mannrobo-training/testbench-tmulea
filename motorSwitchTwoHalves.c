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
while (true)
	if (SensorValue(bump) == 1 && SensorValue(limit) == 1)
	{
		motor[drive1] = 120;
		motor[drive2] = 120;
	}
	else if (SensorValue(bump) == 1)
	{
		motor[drive1] = 63;
		motor[drive2] = 63;
	}
	else if (SensorValue(limit) == 1)
	{
		motor[drive1] = 63;
		motor[drive2] = 63;
	}
	else;
	{
		motor[drive1] = 0;
		motor[drive2] = 0;
	}
}
