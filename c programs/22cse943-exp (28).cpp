#include<stdio.h>
int main()
{
	int i,a,b=0;
	printf("Enter the value of number = ");
	scanf("%d",&a);
	for( ;a>0;a=a/10)
	{
		i=a%10;
		b+=i;
	}
	printf("Sum of the digit of number =%d",b);
	return 0;
}
