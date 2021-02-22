/*
 * Pressure_Sensor_Driver.h
 *
 *  Created on: Feb 21, 2021
 *      Author: Shady mamdouh
 */

#ifndef PRESSURE_SENSOR_DRIVER_H_
#define PRESSURE_SENSOR_DRIVER_H_

void PS_init();
void reading_state();
extern void (*PS_ptr)();

#endif /* PRESSURE_SENSOR_DRIVER_H_ */
