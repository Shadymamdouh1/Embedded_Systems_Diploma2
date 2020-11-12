/*
 ============================================================================
 Name        : ex5.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {char x;
      while(1)
      {
	    printf("enter alphabet :");

		fflush(stdin);
		fflush(stdout);
		scanf("%c",&x);
		if (((x >='a') && (x <='z')) || ((x>='A')&&(x<='Z')))
		{
			printf("%c is alphabet\r\n",x);
		}
		else
		{
			printf("%c is not alphabet\r\n",x);
		}
      }
}
