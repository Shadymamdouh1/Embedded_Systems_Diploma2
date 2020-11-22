/*
 ============================================================================
 calculting factorial using recursion function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorial=1;
int fac(int x);

int main(void) {
	int num;
	int a;
	printf("please enter number :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	a=fac(num);
	printf("Factorial of %d is : %d",num,a);

}
int fac(int x)
{
	if(x>0)
	{
		factorial=factorial*x;
		fac(x-1);
	}
	return factorial;
}
