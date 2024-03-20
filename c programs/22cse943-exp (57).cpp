#include<stdio.h>
int main()
{
	int a[3],b[3],i,j,c[3];
	printf("Enter the values for the array a :\n");
	for(i=0;i<3;i++)
	scanf("%d",&a[i]);
	printf("Enter the values for the array b :\n");
	for(j=0;j<3;j++)
	scanf("%d",&b[j]);
	for(i=0,j=0;i<3,j<3;i++,j++)
	c[i]=a[j]+b[j];
	printf("The value of array c :");
	for(i=0;i<3;i++)
	printf("%d ",c[i]);
	return 0;
}
