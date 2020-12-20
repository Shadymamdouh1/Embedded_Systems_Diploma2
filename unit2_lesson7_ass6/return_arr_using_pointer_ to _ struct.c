/*
 ============================================================================
 Name        : return_arr_using_pointer_.c
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
struct shady{
	int a[M][N];
};
struct shady ret_Arr()
{
	struct shady x=
	{
			{{1,2,3},
			{4,5,6},
			{7,8,9}}
	};

	return x;
};
int main(void) {
	int i,j;
	struct shady d =ret_Arr();
	struct shady *r= &d;
	for(i=0;i<M;i++)
		{   printf("\n");
			for(j=0;j<N;j++)
			{
				printf("%d \t",r->a[i][j]);
			}
		}
}
