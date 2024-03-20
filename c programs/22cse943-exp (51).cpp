#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		for(j=3;j>=i;j--)
		printf("  ");
		for(k=1;k<=i;k++)
		printf("%d ",k);
              for(k-=2;k>0;k--)
              printf("%d ",k);
		printf("\n");
	}
	return 0;
}
