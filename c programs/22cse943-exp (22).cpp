#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c=0,r;
	printf("Enter the 4-digit positive number : ");
	scanf("%d",&a);
	b=a;
	while(a>0)
	{
		r=a%10;
		c=c+(pow(r,4));
		a=a/10;
	}
	if(b==c)
	   printf("%d is an armstrong number",b);
	else
	   printf("%d is not an armstrong number",b);
	return 0;       
}
