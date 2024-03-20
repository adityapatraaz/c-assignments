#include <stdio.h>
int main()
{ char a[20],b[20];
int i,j,k;
scanf("%s",a);
for(i=0;a[i]!=0;i++);
j=i-1;
for(k=0;k<i;k++,j--)
b[k]=a[j];
b[k]='\0';
printf("%s",b);
return 0;
}
