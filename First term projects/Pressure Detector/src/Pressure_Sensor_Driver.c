/*
 * Pressure_Sensor_Driver.c
 *
 *  Created on: Feb 21, 2021
 *      Author: Shady mamdouh
 */

#include"driver.h"
#include"Pressure_Sensor_Driver.h"
extern int Pval;
void (*PS_ptr)();
extern void set_pressureValue();
void PS_init()
{
	 GPIO_INITIALIZATION ();
	 reading_state();
}

void reading_state()
{ PS_ptr=reading_state;
	Pval=getPressureVal();
	set_pressureValue();

}

