#include<stdio.h>
int main()
{
	int a[10],i,j,n=10,t,pos;
	printf("Enter the values to the array :");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
	   pos=i;
	   for(j=i+1;j<n;j++)
	   {
	   	if(a[pos]>a[j])
	   	pos=j;
	   }	
	   if(pos!=i)
	   {
	   	t=a[pos];
	   	a[pos]=a[i];
	   	a[i]=t;
	   }
	}
	printf("values of array after sorting :");
	for(i=0;i<10;i++)
	printf("%d  ",a[i]);
	return 0;
}
