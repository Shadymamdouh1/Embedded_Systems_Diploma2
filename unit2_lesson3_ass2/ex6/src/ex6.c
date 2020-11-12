/*
 ============================================================================
 Name        : ex6.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,sum=0;
	printf("enter an integer :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}

	printf("sum =%d",sum);
 }
