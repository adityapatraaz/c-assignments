#include<stdio.h>
int main()
{
	int a,b,c,d;
	a=0;
	b=1;
	printf("Enter the number upto fibonacci series is requried :");
	scanf("%d",&d);
	printf("0 1");
	for(c=0;c<d;)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
	}
	return 0;
}
