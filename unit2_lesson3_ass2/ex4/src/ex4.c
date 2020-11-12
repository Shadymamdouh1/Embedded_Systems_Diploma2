/*
 ============================================================================
 Name        : ex4.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x ;
	while(1)
	{
	printf("enter a number :");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	if(x==0)
	{
		printf("you entered zero \r\n");
	}
	else{
		  if(x>0)
		  {
			  printf("%f is positive \r\n",x);
		  }
		  else{
			  printf("%f is negative\r\n",x);
		      }
	    }
  }
}


