/*
 ============================================================================
 calculate area using macros
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
#define area(r)(pi*r*r)
int main(void) {
	float area,rad;
	printf("enter radius :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&rad);
	area=area(rad);
	printf("the Area is = %.1f",area);
}
