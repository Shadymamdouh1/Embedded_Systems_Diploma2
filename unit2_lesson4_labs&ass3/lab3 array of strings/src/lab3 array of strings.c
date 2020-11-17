/*
 ============================================================================
 Name        : lab3.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char i;
	char x[5][14]= {"shady mamdouh","ahmed ali","emad shokry","kamal ahmed","reda ahmed"};
	for (i=0;i<5;i++)
	{
		printf("%s\r\t",&x[i]);
	}

}
