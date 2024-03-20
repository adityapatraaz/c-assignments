#include<stdio.h>
int main()
{
	int a[3][4],i,j,sum;
	printf("Enter the values into the array : \n");
	for(i=0;i<3;i++)
	{
		printf("Enter the values into the %d row : \n",i+1);
		for(j=0;j<4;j++)
		scanf("%d",&a[i][j]);
	}
	printf("The matrix =\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%d",a[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
			sum=0;
		for(j=0;j<4;j++)
		{
		
			sum+=a[i][j];
		}
		printf("Sum of %d row = %d\n",i+1,sum);
	}	
	return 0;
}
