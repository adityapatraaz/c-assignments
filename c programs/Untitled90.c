#include <stdio.h>
int main()
{int n=2,j;
j=prime(n);
if(j==2)
printf("prime no;");
else
printf("not");
return 0;
}
int prime(int x)
{int i,j=0;
for(i=1;i<=x;i++)
{if(x%i==0)
j++;
}return j;
}
