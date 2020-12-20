/*
 ============================================================================
 Write a program in C to demonstrate how to handle the pointers
in the program.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m =29;
	int* ab=NULL;
	printf("Address of m : 0x%x \r\n value of m : %d\r\n ",&m,m);
	ab=&m;
	printf("Address of pointer ab : 0x%x \r\n Content of pointer ab : %d\r\n ",ab,*ab);
	m=34;
	printf("Address of pointer ab : 0x%x \r\n Content of pointer ab : %d\r\n ",ab,*ab);
	*ab=7;
	printf("Address of m : 0x%x \r\n value of m : %d\r\n ",ab,*ab);
}
