/*
 ============================================================================
 Name        : ex3.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y,z;
	printf("Enter 3 numbers :");
	fflush(stdin);
	fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);
	if(x>y)
	{
		if(x>z)
		{
			printf("Largest number is %f",x);
		}
		else{
			printf("Largest number is %f",z);
		    }
	}
	else {
		    if(y>z)
		    {
		    	printf("Largest number is %f",y);
		    }
		    else {
		    	printf("Largest number is %f",z);
		         }

	     }
}
