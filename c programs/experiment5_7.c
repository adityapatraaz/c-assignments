#include "stdio.h"
int main()
{
    char c;
    int a,b;

    printf("Enter the operation symbol:");
    scanf("%c",&c);

    printf("Enter the first number:");
    scanf("%d",&a);

    printf("Enter the second number:");
    scanf("%d",&b);

    if (c=='+')
    printf("sum of two numbers is %d",a+b);

    else if (c=='-')
    printf("Subtraction of two number is %d",a-b);

    else if (c=='*')
    printf("Multiplication of two number is %d",a*b);

    else if (c=='/')
    printf("Division of two number is %d and remainder is %d",a/b,a%b);

    return 0;
}