#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("Enter the values for the array :\n");
	for(i=0;i<3;i++)
	{
		printf("Enter for %d row :",i+1);
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	printf("The array = \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d  ",a[i][j]);
		printf("\n");
       }
       return 0;
}
