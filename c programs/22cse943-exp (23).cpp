#include<stdio.h>
int main()
{
	char c;
	int a,b;
	printf("Enter the arithmetic operator : ");
	scanf("%c",&c);
	printf("Enter the value for a : ");
	scanf("%d",&a);
	printf("Enter the value for b : ");
	scanf("%d",&b);
	switch(c){
		case '+':
			  printf("Sum of %d and %d = %d",a,b,a+b);
			  break;
		case '-':
			  printf("Substraction of %d and %d = %d",a,b,a-b);
			  break;
		case '*':
			  printf("Multiplication of %d and %d = %d",a,b,a*b);
			  break;
		case '/':
			  printf("Division of %d and %d = %d and remainder = %d",a,b,a/b,a%b);
			  break;			  			  			  
	}
	return 0;
}
