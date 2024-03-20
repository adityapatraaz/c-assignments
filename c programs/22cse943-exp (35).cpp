#include<stdio.h>
int main()
{
	int i,a,f;
	i=1;
	f=1;
	printf("Enter the number : ");
	scanf("%d",&a);
	while(i<=a)
	{
		f*=i;
		i++;
	}
	printf("The factorial of %d is %d",a,f);
	return 0;
}
