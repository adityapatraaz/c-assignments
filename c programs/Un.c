#include <stdio.h>
int main()
{int a[19],i,n,j,k;
scanf("%d",&n);
for(i=0;i<=n;i++)
{scanf("%d",&a[i]);
}
puts (a);
scanf("pos%dvalue%d",&j,&k);
for(i=n-1;i<=j;i--)
{a[i+1]=a[i];
}a[j]=k;
n=n+1;
return 0;
}
