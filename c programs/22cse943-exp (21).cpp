#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two number : \n");
	scanf("%d%d",&a,&b);
	while(b>0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	printf("Greastest common divisor = %d",a);
	return 0;
}
