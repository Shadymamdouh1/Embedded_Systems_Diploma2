/*
 ============================================================================
 write c program to calculate the average using arrays
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, n;
	float average,sum=0;
	float arr[n];
	printf("Enter number of data ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{printf("%d.enter number :  ",i+1);
	fflush(stdin);fflush(stdout);
	scanf("%f",&arr[i]);
	sum=sum+arr[i];
	}
	average=sum/n;
	printf("the average = %f",average);

}
