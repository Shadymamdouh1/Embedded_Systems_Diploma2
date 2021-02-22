/*
 * AlarmMonitor.c
 *
 *  Created on: Feb 21, 2021
 *      Author: shady mamdouh
 */
#include "AlarmMonitor.h"
int x;
void (*AM_ptr)();
void High_pressure_detect()
{
	AM_ptr=AlarmOn_state;

}
void AlarmOff_state()
{
stopAlarm();
AM_ptr=AlarmOff_state;
}
void AlarmOn_state()
{   for(x=0;x<500;x++) // period of blinking
	{startAlarm();
	Delay(10000);
	stopAlarm();
	Delay(10000);
	}
	AM_ptr=AlarmOff_state;

}

