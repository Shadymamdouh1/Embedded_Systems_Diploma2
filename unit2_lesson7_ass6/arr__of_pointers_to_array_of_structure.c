/*
 ============================================================================
 Name        : arr__of_pointers_to_array_of_structure.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct shady{
	char arr[20];
	int age;
};
int main(void) {
	int i;
	struct shady x[3]={{"shady mamdouh",30},{"ahmed",28},{"sabeer",23}};
	struct shady *y[3];
	for(i=0;i<3;i++)
	{
		y[i]=&x[i];
	}
	for(i=0;i<3;i++)
	{
		printf("%s %d \t",y[i]->arr,y[i]->age);
	}
}
