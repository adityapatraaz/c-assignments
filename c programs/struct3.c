#include "stdio.h"
struct student{
	int rollno;
	char name[20];
	char branch[40];
	int batch;
};
struct student s,*p;
main()
{p=&s;
printf("enter roll no");
scanf("%d",&p->rollno);

printf("enter name no");
scanf("%s",&p->name);

printf("enter branch");
scanf("%s",&p->branch);

printf("enter batch no");
scanf("%d",&p->batch);
printf("stud details are\n");
printf("roll no:%d\nname:%s\nbranch:%s\nbatch:%d\n",p->rollno,p->name,p->branch,p->batch);
return 0;}
