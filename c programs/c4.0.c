#include <stdio.h>
int main()
{
  int i;
  for(i=2;i<=20;i+=2)
 {if (i==10||i==12)
 continue;
   printf("%d\n",i);
   }
 return 0;
}
