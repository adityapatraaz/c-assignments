#include <stdio.h>
void main()
{int a,b;
scanf("%d%d",&a,&b);
printf("%d",hcf(a,b));
}
int hcf(int x,int y)
{while(y>0)
{int r=x%y;
x=y;
y=r;} return x;}
