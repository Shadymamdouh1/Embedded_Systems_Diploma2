/*
 ============================================================================
 Program to add two complex number using structure
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
struct Scomplex{
	float M_R;
	float M_I;
};
struct Scomplex read_numbers();
struct Scomplex sum_of_numbers(struct Scomplex x,struct Scomplex y);
int main(void) {
	struct Scomplex x,y,sum;
	x=read_numbers();
	y=read_numbers();
	sum=sum_of_numbers(x,y);
	printf("sum = %.2f+ %.2fi",sum.M_R,sum.M_I);
}
struct Scomplex read_numbers()
{   struct Scomplex x;
	printf("for 1st complex number : \n Enter real and imaginary respectively :");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&x.M_R,&x.M_I);
	return x;
}
struct Scomplex sum_of_numbers(struct Scomplex x,struct Scomplex y)
{   struct Scomplex z;
	z.M_R=x.M_R+y.M_R;
	z.M_I=x.M_I+y.M_I;
	return z;
}
