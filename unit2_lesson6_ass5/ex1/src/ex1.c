/*
 ============================================================================
 c program to store info (name,roll and marks) of student using structue
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct Sstudents
{
	char name[50];
	int roll;
	float marks;
};
struct Sstudents read_struct(); // to read structure elements from user
void  print_struct(struct Sstudents x); // to print student data
int main(void) {
	struct Sstudents x;
	x=read_struct();
	print_struct(x);
}
struct Sstudents read_struct()
{struct Sstudents x;
printf("enter information of student : \r\n");
fflush(stdin);fflush(stdout);
printf("enter student name :  ");
fflush(stdin);fflush(stdout);
gets(x.name);
printf("enter roll number :");
fflush(stdin);fflush(stdout);
scanf("%d",&x.roll);
printf("enter marks : ");
fflush(stdin);fflush(stdout);
scanf("%f",&x.marks);
return x;
}
void  print_struct(struct Sstudents x)
{   printf("Displaying information : \n");
	fflush(stdin);fflush(stdout);
	printf(" name : %s \n roll : %d \n marks : %.2f\n ",x.name,x.roll,x.marks);
}
