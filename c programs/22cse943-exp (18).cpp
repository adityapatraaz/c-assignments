#include<stdio.h>
int main()
{
	int a,b,r,i=1,p=1,sum=0;
	printf("Enter your number : ");
	scanf("%d",&a);
	b=a;
	do
	{
		i=1;
		p=1;
		r=a%10;
		while(i<=r)
		{
		 p=p*i;
		 i++;	
		}
		sum=sum+p;
		a=a/10;
	}while(a>0);
	if(b==sum)
	printf("%d is strong number",b);
	else
	printf("%d is not a strong number",b);
	return 0;
}
