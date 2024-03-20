#include<stdio.h>
int main()
{
	int i,a,sum=0;
	printf("Enter the value of n = ");
	scanf("%d",&a);
	for(i=1;i<=a;i+=2)
	{
		sum+=i;
	}
	printf("The sum of all odd numbers upto %d is %d",a,sum);
	return 0;
}
