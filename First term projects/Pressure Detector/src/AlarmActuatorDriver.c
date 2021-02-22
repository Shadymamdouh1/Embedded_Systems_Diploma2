/*
 * AlarmActuatorDriver.c
 *
 *  Created on: Feb 21, 2021
 *      Author: Shady mamdouh
 */
#include"AlarmActuatorDriver.h"
#include "driver.h"

void startAlarm()
{
	Set_Alarm_actuator(1);

}
void stopAlarm()
{
	Set_Alarm_actuator(0);

}

