/*
 ============================================================================
 Name        : ex5.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,flag=0;
		float num;float x[30];
		printf("enter number of elements");
		fflush(stdout);fflush(stdin);
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%f",&x[i]);
		}
		printf("enter the element to be searched :");
		fflush(stdout);fflush(stdin);
		scanf("%f",&num);
		for(i=0;i<n;i++)
		{
			if(x[i]==num)
			{
				printf("the number is found in location : %d",i+1);
				flag++;
				break;
			}


		}
		if(flag==0)
		{
			printf("the number is not found ");
		}
}
