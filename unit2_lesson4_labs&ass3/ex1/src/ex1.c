/*
 ============================================================================
 write c program to add two 2*2 matrix entered by the user
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
	float m1[2][2];float m2[2][2];float sum[2][2];
	printf("Enter the elements of  1st matrix\r\n");

	for (i=0;i<2;i++)
	{	 for(j=0;j<2;j++)
		{
			printf(" Enter a%d%d",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&m1[i][j]);
		}
	}
	printf("Enter the elements of  2st matrix\r\n");
	for (i=0;i<2;i++)
	{	for(j=0;j<2;j++)
		{
			printf(" Enter b%d%d :",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&m2[i][j]);
		}
	}
	for (i=0;i<2;i++)
	{   for(j=0;j<2;j++)
		{     sum[i][j]=m1[i][j]+m2[i][j];
		}
	}
	printf("the sum is :");
	for (i=0;i<2;i++)
	{   printf(" \r\n");
		for(j=0;j<2;j++)
		{
			printf(" %.2f\t",sum[i][j]);


		}
	}
}











