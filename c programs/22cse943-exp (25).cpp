#include<stdio.h>
int main()
{
	int i,a,n,b=1;
	printf("Enter the value of a = ");
	scanf("%d",&a);
	printf("Enter the value of n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		b=b*a;
	printf("%d ^ %d is %d",a,n,b);	
	return 0;
}
