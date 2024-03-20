#include <stdio.h>
int main()
{int a,b,x,y=0;

printf("enter a no");
scanf("%d",&a);
a=b;
while(a>0)
{x=a%10;
y=(x*x*x)+y;
a=a/10;
}
if(y==b)
printf("anst no");
else
printf("not");
return 0;
}
