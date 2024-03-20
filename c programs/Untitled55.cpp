#include<stdio.h>
int main()
{
	int a[10],i,c,d;
	printf("Enter the 10 values of the array :");
	for (i=0;i<=9;i++)
	{
	scanf("%d",&a[i]);
	if(i==0)
{
		c=a[i]; 
		d=a[i];
}
	if( i>0)
	{
	c=c>a[i]?c:a[i];
	d=d<a[i]?d:a[i];
	}
   }

	printf("The largest number =%d and the smallest number is =%d",c,d);
	return 0;
	
}

