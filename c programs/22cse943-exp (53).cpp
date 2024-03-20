#include<stdio.h>
int main()
{
       int a[10],i,n,m;
       printf("Enter 10 values for array :");
       for(i=0;i<10;i++)
       scanf("%d",&a[i]);
       n=a[0];
       m=a[0];
       for(i=0;i<10;i++)
       {
       	n=n>a[i]?n:a[i];
       	m=m<a[i]?m:a[i];
	}
	printf("Largest number = %d and smallest number = %d",n,m);
	return 0;
}

