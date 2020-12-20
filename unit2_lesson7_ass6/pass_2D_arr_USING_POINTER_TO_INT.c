/*
 ============================================================================
 Name        : pass_2D_arr_USING_POINTER_TO_INT.c
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
void shady(int *arr)
{
int i;
for(i=0;i<M*N;i++)
{  if(i%3==0)
{
printf("\n");
}
printf("%d\t",arr[i]);
}
}
int main(void) {
	int arr[M][N]={{1,2,3},{4,5,6},{7,8,9}};
			 shady(&arr[0][0]);
}
