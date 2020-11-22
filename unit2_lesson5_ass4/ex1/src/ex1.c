/*
 ============================================================================
 write a c function to get prime numbers among interval
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int prime_num(int x);
int main(void) {
	int i,j,a,y;
	printf("Enter two numbers(intervals) : ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&i,&j);
	printf("Prime numbers between %d and %d are :",i,j);
	for(y=i+1;y<j;y++)
	{
		a=prime_num(y);
		if(a==0)
		{
			printf("%d\t",y);
		}
	}
}
int prime_num(int x)
{

	int flag=0;
	int num;
for(num=2;num<=x/2;num++)
{
	if(x%num==0)
		{
		flag=1;
		break;
		}
		}
return flag;


}
