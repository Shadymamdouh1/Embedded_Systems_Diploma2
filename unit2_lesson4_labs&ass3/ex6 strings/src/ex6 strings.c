/*
 ============================================================================
 Name        : ex6.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char counter=0,ch;
	int i;
	char x[100];
	printf("enter string");
	fflush(stdout);fflush(stdin);
	gets(x);
	printf("enter character : ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&ch);
	for(i=0;i<100 && x[i]!='\0';i++)
	{
		if(x[i]==ch)
			counter++;

	}
	printf("the frequancy of %c : %d",ch,counter);

}
