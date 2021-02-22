/*
 *  MainAlgorithm.c
 *
 *  Created on: Feb 21, 2021
 *      Author: Shady mamdouh
 */
#include"MainAlgorithm.h"
void High_pressure_state(void);


extern int Pval;
void (*MA_ptr)();
#define Threshold 20
void set_pressureValue(void)
{
MA_ptr=High_pressure_state;
}
void High_pressure_state(void)
 {
	if(Pval <= Threshold)
		{
		MA_ptr=High_pressure_state;

		}
	else
		{
		High_pressure_detect();
		MA_ptr=High_pressure_state;
		}
 }

