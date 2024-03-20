#include <stdio.h>
int main()
{
int sum(int,int);
int a,b,c;
scanf("%d%d",&a,&b);
c=sum(a,b);
printf("the sum is %d",c);
}
int sum(int x,int y)
{return x+y;
}
