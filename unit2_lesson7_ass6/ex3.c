/*
 ============================================================================
 Write a program in C to print a string in reverse using a pointer
The Alphabets are :
Test Data :
Input a string : w3resource
Expected Output :
Pointer : Print a string in reverse order :
------------------------------------------------
Input a string : w3resource
Reverse of the string is : ecruoser3w
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	char x[20];
	char *ptr=NULL;
	int i;
	unsigned int y;
	printf("input a string : ");
	fflush(stdin);fflush(stdout);
	gets(x);
	ptr=x;
	y=strlen(x); // to detect the ptr location at the end of string
	ptr=ptr+y-1;
	printf("reverse of string is :\t");
	for(i=y-1;i>=0;i--) // to print string in reverse order char by char
	{printf("%c",*ptr--); // if we used ptr without * we must use %s because %s using add not value
	// but we can't do this because ptr will print all locations till it reaches a null
	}
}
