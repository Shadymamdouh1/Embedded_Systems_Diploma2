/*
 ============================================================================

EX3:

Write C Program to Add Two Integers

i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y,sum=0;
	printf("Enter two integers:");
	fflush(stdout);
	fflush(stdin);
	scanf("%d%d",&x,&y);
	sum = x + y ;
	printf("Sum: %d",sum);
}
