/*
 ============================================================================
 Name        : pass_2Darr_using_ptr_to_row.c
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
void shady(int (*arr)[N])
{  int i;
	{
		for(i=0;i<M*N;i++)
		{
			printf("%d \t",(*arr)[i]);
		}
	}
}
int main(void) {
	int arr[M][N]={{1,2,3},{4,5,6},{7,8,9}};
		 shady(arr);
}
