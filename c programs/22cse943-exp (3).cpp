#include<stdio.h>
int main()
{
	int a,b;
	char c;
	printf("Enter symbol of the operation : ");
	scanf("%c",&c);
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);

	if(c=='+')
	   printf("Sum of the number = %d",a+b);
	else  if(c=='-')
	   printf("Subtraction of the number = %d",a-b);  
	else  if(c=='*')
	   printf("Multiplication of the number = %d",a*b);
	else  if(c=='-')
	   printf("Division of the number = %d and remainder = %d",a/b,a%b); 
	return 0;
}
	      	
