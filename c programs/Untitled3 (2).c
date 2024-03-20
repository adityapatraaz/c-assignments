#include <stdio.h>
int main()
{int a[10],j,n,i,b;
scanf("%d",&n);
for(i=0;i<=n;i++)
{scanf("%d",&a[i]);}
printf("%d",a[i]);
scanf("%d",&b);
n++;
for(i=n;i>0;i--)
{a[i-1]=a[i-2];
}
a[0]=b;
for(i=0;i<=n;i++)
{printf("%d",a[i]);}
return 0;
}
