#include<stdio.h>
int main()
{
	int a,i=2;
	printf("Enter the number : ");
	scanf("%d",&a);
	do
	{
		if(a%i==0)
		{
			printf("Your number is not a prime number");
			break;
		}
		i++;
	}while(i<a);
	if(i==a)
	printf("Your number is  a prime number");
	return 0;
}
