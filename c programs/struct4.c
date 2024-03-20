#include "stdio.h"
struct emp{
	int empid;
	char name[20];
	float salary;
};
//void display(struct emp[10]);
main()
{struct emp a[10];
int i;
printf("enter empid,name,salay");
for(i=0;i<=9;i++)
{scanf("%d%s%f",&a[i].empid,&a[i].name,&a[i].salary);
}
display(a);
return 0;
}
void display(struct emp x[10])
{
int i;
printf("\n the employ whose salary <=10000 are");
for(i=0;i<=9;i++)
{if(x[i].salary<=10000);
printf("%d%s",x[i].empid,x[i].name);
}
}

