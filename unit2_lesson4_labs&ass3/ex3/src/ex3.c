/*
 ============================================================================
 Name        : ex3.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b;

	float m;
	int i,j;
	printf("enter row and column of matrix :");
	 fflush(stdin);
	 fflush(stdout);
	 scanf("%d%d",&a,&b);
	 float x[a][b];
	 printf("enter elements of matrix :\r\n");
	for (i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		    {
			  printf("enter element a%d%d :\r\n",i+1,j+1);
			  fflush(stdin);
			  fflush(stdout);
			  scanf("%f",&x[i][j]);
		    }
	}
	printf("the matrix is :");
	for (i=0;i<a;i++)
		{
		   printf("\r\n");
			for(j=0;j<b;j++)
			    {
				  printf("%.2f\t",x[i][j]);

			    }

}
	for (i=0;i<b;i++)
		{
			for(j=0;j<a;j++)
			    {
				  if(i==j)
				  {continue;}
				  else if (j<i){
					              m=x[i][j];
					              x[i][j]=x[j][i];
				                   x[j][i]=m;
				  }
				  }
			    }
	printf("\r\n the transpose is :");
		for (i=0;i<b;i++)
			{
			   printf("\r\n");
				for(j=0;j<a;j++)
				    {
					  printf("%.2f\t",x[i][j]);

				    }
			}


}

