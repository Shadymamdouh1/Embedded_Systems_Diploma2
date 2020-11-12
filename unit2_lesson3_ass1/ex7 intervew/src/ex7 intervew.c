/*
 ============================================================================
EX7:
it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b;
		printf("Enter value of a: ");
		fflush(stdout);
		fflush(stdin);
		scanf("%f",&a);
		printf("Enter value of b: ");
		fflush(stdout);
		fflush(stdin);
		scanf("%f",&b);
		a=a+b;
		b=a-b;
		a=a-b;
		printf("After swapping, value of a = %f \n",a);
		printf("After swapping, value of b = %f \n",b);
}
