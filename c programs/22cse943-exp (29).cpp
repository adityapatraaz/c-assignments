#include<stdio.h>
int main()
{
	int i,a,b;
	printf("Enter the value of n = ");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		b=a*i;
		printf("%d*%d=%d\n",a,i,b);
	}
	return 0;
}
