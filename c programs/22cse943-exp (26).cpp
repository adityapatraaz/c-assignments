#include<stdio.h>
int main()
{
	int c,i,a,b=0;
	printf("Enter the value of number = ");
	scanf("%d",&a);
	c=a;
	for( ;a>0;a=a/10)
	{
		i=a%10;
		b=b*10+i;
	}
	if(c==b)
	printf("%d is a palindrome number.",c);	
	else
	printf("%d is a not palindrome number.",c);	
	return 0;
}
