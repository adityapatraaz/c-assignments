#include <stdio.h>
int main()
{//fibonaci series 0 1 1 2 3.....
int i,a,x=0,y=1,z;
printf("enter no:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{printf("%d ",x);
z=x+y;//1
x=y;//x=1
y=z;//y
}return 0;
}
