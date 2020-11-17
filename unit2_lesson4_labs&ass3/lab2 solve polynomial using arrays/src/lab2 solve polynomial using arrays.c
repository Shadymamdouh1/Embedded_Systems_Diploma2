/*
 ============================================================================
 Name        : lab2.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	     float x[4]={5,2,3,1};
	     float y ;
	     int i;

	    for (i=0;i<4;i++)
	    	{y = 5*x[i]+3*x[i]+2;
	    printf("the value of y(%.2f)= %f \n" ,x[i],y);
	    	}
}
