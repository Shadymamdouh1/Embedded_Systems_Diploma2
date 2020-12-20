/*
 ============================================================================
 Name        : return_2D_arr_in_ptr_to_int.c
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
int* shady()
{
	static int arr[M][N]={{1,2,3},{4,5,6},{7,8,9}};
				 return (&arr[0][0]);
}
int main(void) {
	int i, *ptr;
	ptr=shady();
	for(i=0;i<M*N;i++)
	{
		printf("%d\t",ptr[i]);
	}

}
