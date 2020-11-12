/*
 ============================================================================
 EX4:

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###

###########################
Enter two numbers: 2.4
1.1
Product: 2.640000
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y,mul=1.0;
		printf("Enter two numbers:");
		fflush(stdout);
		fflush(stdin);
		scanf("%f%f",&x,&y);
		mul = x * y ;
		printf("product: %f",mul);
}
