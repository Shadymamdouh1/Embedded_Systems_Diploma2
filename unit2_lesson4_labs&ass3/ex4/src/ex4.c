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
	int n,i,loc;
	float num;float x[30];
	printf("enter number of elements");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	printf("enter the element to be inserted :");
	fflush(stdout);fflush(stdin);
	scanf("%f",&num);
	printf("enter the location :");
		fflush(stdout);fflush(stdin);
		scanf("%d",&loc);

		for(i=n;i>=loc;i--)
			{
				x[i]=x[i-1];
			}
	   n++;
	   x[loc-1]=num;
	   for (i=0;i<n;i++)
	   {
		   printf("%.2f\t",x[i]);
	   }
}
