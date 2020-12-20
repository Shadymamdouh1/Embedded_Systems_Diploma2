/*
 ============================================================================
Write a program in C to print the elements of an array in reverse
order. Test Data :
Input the number of elements to store in the array (max 15) : 5
Input 5 number of elements in the array :
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int x[15];
	int *ptr=x;int y,i;
	printf("Input the number of elements to store in the array (max 15) :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&y);
	printf("Input %d number of elements in the array :\r\n",y);
	fflush(stdout);fflush(stdin);
	for(i=0;i<y;i++)
	{printf("element-%d : ",i+1);
	fflush(stdout);fflush(stdin);
	scanf("%d",ptr++);
	}
	ptr--;               //because in the last postfix the ptr points to the element after end of array
	printf("The elements of array in reverse order are :\r\n");
	for(i=y-1;i>=0;i--)
	{
		printf("element-%d : %d\r\n",i+1,*ptr--);
	}
}
