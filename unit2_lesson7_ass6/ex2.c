/*
 ============================================================================
 Write a program in C to print all the alphabets using a pointer. Go
to the editor
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	char *ptr=NULL;
	char x[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	ptr=x;
	for(i=0;i<sizeof(x);i++)
	{
		printf("%c ",*ptr++);
	}
}
