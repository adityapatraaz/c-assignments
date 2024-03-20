#include <stdio.h>
int main()
{int i,j;
scanf("%d",&i);
while(i>0)
{j=i%10;
printf("%d",j);
i=i/10;
}
return 0;
}
