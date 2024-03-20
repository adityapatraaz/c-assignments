#include<stdio.h>
int main()
{
	int i,a;
	printf("Enter the number :");
	scanf("%d",&a);
	i=2;
	while(i<a)
	{
		if(a%i==0)
		break;
		i++;
	}
	if(a==i)
	printf("It is a prime number");
	else
	printf("It is not a prime number");
	return 0;
}
