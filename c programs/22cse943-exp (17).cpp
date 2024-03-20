#include<stdio.h>
int main()
{
	int a,i=1,sum=0;
	printf("Enter the number : ");
	scanf("%d",&a);
	do
	{
		sum+=i;
		i++;
		if(sum==a)
		break;
	}while(i<=a);
	if(sum==a)
	printf("%d is a perfect number ",a);
	else
	printf("%d is not a perfect number ",a);
	return 0;
}
