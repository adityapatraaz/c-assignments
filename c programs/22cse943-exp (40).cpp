#include<stdio.h>
int main()
{
	int a[3][4],b[4][3],i,j,k,c[3][3];
	printf("Enter the values into the array a : \n");
	for(i=0;i<3;i++)
	{
		printf("Enter the values into the %d row : \n",i+1);
		for(j=0;j<4;j++)
		scanf("%d",&a[i][j]);
	}
		printf("Enter the values into the array b : \n");
	for(i=0;i<4;i++)
	{
		printf("Enter the values into the %d row : \n",i+1);
		for(j=0;j<3;j++)
		scanf("%d",&b[i][j]);
	}
	printf("The matrix a =\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	printf("The matrix b =\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		printf("%d\t",b[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<4;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("The matrix c =\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d\t",c[i][j]);
		printf("\n");
	}
	return 0;
}
