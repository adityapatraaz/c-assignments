#include "stdio.h"
struct student{
	int rollno;
	float marks;
	char name[20];
}s[10];
main()
{
int i;
for(i=0;i<10;i++)	
{printf("enter details of%d students",i+1);
scanf("%d%f%s",&s[i].rollno,&s[i].marks,&s[i].name);
}
for(i=0;i<10;i++)
{printf("roll no=%d\n	score=%.2f\n	name=%s\n",s[i].rollno,s[i].marks,s[i].name);
}
return 0;}

