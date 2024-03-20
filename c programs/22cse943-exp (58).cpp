#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,c[3][3];
	printf("Enter the values for the array a :\n");
	for(i=0;i<3;i++)
	{
		printf("Enter for %d row :",i+1);
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter the values for the array b :\n");
	for(i=0;i<3;i++)
	{
		printf("Enter for %d row :",i+1);
		for(j=0;j<3;j++)
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		c[i][j]=a[i][j]+b[i][j];
	}
	printf("The value of matrix c =\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d  ",c[i][j]);
		printf("\n");
       }
	return 0;
}
