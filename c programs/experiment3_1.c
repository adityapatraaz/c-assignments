#include "stdio.h"
int main()
{
    int a,b;
    printf("Enter the first number (a):");
    scanf("%d",&a);

    printf("Enter the second number (b):");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n After swapping the values of a=%d , b=%d",a,b);

    return 0;

}