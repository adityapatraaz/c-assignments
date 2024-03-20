#include <stdio.h>
int main()
{ char a[20];
int i,j;
scanf("%s",a);
for(i=0;a[i]!=0;i++);
for(j=i-1;j>=0;j--)
printf("%c",a[j]);
return 0;
}
