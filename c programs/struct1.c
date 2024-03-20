#include "stdio.h"
struct student{
	int rollno;
	float marks;
	char name[20];
};
main()
{struct student s1={341,90.21,"faran"};
struct student s2={442,90.22,"fatan"};
printf("%d",s1.rollno);
}
