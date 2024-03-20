#include <stdio.h>
int main()
{int a=100,b=200;
swap(a,b);
printf("a=%d,b=%d",a,b);
return 0;
}
void swap(int x,int y)
{int temp;
temp=x;
x=y;
y=temp;
printf("x=%d,y=%d",x,y);
}

