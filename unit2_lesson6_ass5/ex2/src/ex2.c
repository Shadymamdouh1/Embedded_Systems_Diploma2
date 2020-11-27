/*
 ============================================================================
program to add feet and inches
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
struct Sdistance
{
	float M_feet;
	float M_inches;
};
struct Sdistance read_distance();
struct Sdistance sum_of_distance(struct Sdistance x,struct Sdistance y);
int main(void) {
	struct Sdistance x,y,sum;
	x=read_distance();
	y=read_distance();
	sum=sum_of_distance(x,y);
	printf("sum of distance = %.2f\' - %.2f\"",sum.M_feet,sum.M_inches);
}
struct Sdistance read_distance()
{   struct Sdistance x;
	printf("Enter information for 1st distance\n Enter feet : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x.M_feet);
	printf(" Enter inch : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x.M_inches);
	return x;
}
struct Sdistance sum_of_distance(struct Sdistance x,struct Sdistance y)
{   struct Sdistance z;
	z.M_feet=x.M_feet+y.M_feet;
	z.M_inches=x.M_inches+y.M_inches;
	if(z.M_inches>=12.0)     // Because a foot contains 12 inches
	{   z.M_inches=z.M_inches-12.0;
		z.M_feet+=1;  // increment feet by 1
	}
	return z;
}






