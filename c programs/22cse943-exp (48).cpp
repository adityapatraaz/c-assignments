#include<stdio.h>
int sigma(int);
int main()
{
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);
	printf("Sum of n natural number upto %d is %d",a,sigma(a));
	return 0;
}
int sigma(int x)
{
	if(x==1)
	return 1;
	else
	return x + sigma(x-1);
}
