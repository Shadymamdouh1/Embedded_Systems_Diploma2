/*
 * main.c
 *
 *  Created on: Feb 21, 2021
 *      Author: Shady mamdouh
 */
#include "Pressure_Sensor_Driver.h"
#include "MainAlgorithm.h"
#include "AlarmMonitor.h"
#include "driver.h"
int Pval;
int main(void)
{    // pointer to functios initializtion  
	PS_ptr=PS_init;
	MA_ptr=High_pressure_state;
	AM_ptr=AlarmOff_state;
	while(1)
		{
		(*PS_ptr)(); // refers to Pressure_Sensor_Driver module
		(*MA_ptr)(); // refers to MainAlgorithm module
        (*AM_ptr)(); // refers to AlarmMonitor module
//Delay(10000);   // for embedded delay
		}
}

