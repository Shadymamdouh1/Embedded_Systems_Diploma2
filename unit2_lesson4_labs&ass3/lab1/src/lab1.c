/*
 ============================================================================
 Name        : lab1.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	float degree[10];
	for(x=0;x<10;x++)
	{
		printf("enter stdent %d degree",x);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&degree[x]);

	}
	for(x=0;x<10;x++)
		{printf("student %d degree is : %.2f \n ",x,degree[x]);}
}
