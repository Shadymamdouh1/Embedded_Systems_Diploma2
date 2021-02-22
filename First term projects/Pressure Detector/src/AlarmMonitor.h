/*
 * AlarmMonitor.h
 *
 *  Created on: Feb 21, 2021
 *      Author: Shady mamdouh
 */


#ifndef ALARMMONITOR_H_
#define ALARMMONITOR_H_
#include"AlarmActuatorDriver.h"
#include"driver.h"
void High_pressure_detect();
void AlarmOff_state();
void AlarmOn_state();
extern void stopAlarm();
extern void startAlarm();
extern void (*AM_ptr)();
#endif /* ALARMMONITOR_H_ */

