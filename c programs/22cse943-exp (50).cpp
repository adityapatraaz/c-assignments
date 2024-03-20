#include<stdio.h>
int main()
{
	int i,j,a;
	for(i=1;i<=5;i++)
	{
		a=1;
		for(j=5;j>=i;a+=2,j--)
		printf("%d ",a);
		printf("\n");
	}
	return 0;
}
