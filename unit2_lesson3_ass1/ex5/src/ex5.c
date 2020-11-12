/*
 ============================================================================
 EX5:

Write C Program to Find ASCII Value of a Character

#########Console_output######
Enter a character: G
ASCII value of G = 71
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	printf("Enter a character:");
	fflush(stdout);
    fflush(stdin);
    scanf("%c",&x);
    printf("\n ASCII value of %c =%d ",x,x);

}
