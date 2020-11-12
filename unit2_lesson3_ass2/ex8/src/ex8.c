/*
 ============================================================================
 Name        : ex8.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(1)
	{
	char operator;
	float x,y,sum,mul,div,sub;
	printf("enter an operator + or - or * or divide :");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&operator);
	printf("enter two operands :");
		fflush(stdin);
		fflush(stdout);
		scanf("%f%f",&x,&y);
	switch(operator)
	{
	case '+' :
	    {sum=x+y;
	    	printf("%f + %f = %f\r\n ",x,y,sum);
	    	break;
	    }
	case '-' :
		    {sub=x-y;
	    	printf("%f - %f = %f\r\n ",x,y,sub);
	    	break;

		    }
	case '*' :
		    {mul=x*y;
	    	printf("%f * %f = %f\r\n ",x,y,mul);
	    	break;

		    }
	case '/' :
		    { if(y==0)
		        {
		    	printf("logical error, you can not divide by zero \r\n");
		    	break;
		        }
		    else{
		    	div=x/y;
	    	    printf("%f / %f = %f \r\n ",x,y,div);
	    	    break;
		        }
		    }
	default :
	         {
    	      printf("enter correct operator\r\n");
            }
	}

}
}
