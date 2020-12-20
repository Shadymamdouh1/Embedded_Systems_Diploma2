/*
 ============================================================================
 Name        : pass_arr_using_pointer.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 3
void shady(int (*arr)[M][N])
{  int i,j;
	for(i=0;i<M;i++)
	{   printf("\n");
		for(j=0;j<N;j++)
		{
			printf("%d \t",(*arr)[i][j]);
		}
	}
}
int main(void) {
	 int arr[M][N]={{1,2,3},{4,5,6},{7,8,9}};
	 shady(&arr);
}
