#include "stdio.h"
int main()
{
    int a,b,c,d; 
    printf("Enter the value of A:");
    scanf("%d",&a);
    
    printf("Enter the value of B:");
    scanf("%d",&b);

    printf("\n SUM:%d",a+b);
    printf("\n SUBTRACTION:%d",a-b);
    printf("\n MULTIPLICATION:%d",a*b);
    printf("\n DIVISION:%d",a/b);
    printf("\n REMAINDER:%d",a%b);

    c=a>b;
    d=b>a;

    if (c)
    printf("\n A is greater than B");
    else
    printf("\n A is smaller than B");

    if (d)
    printf("\nB is greater than A");
    else
    printf("\n B smaller than A");



    return 0;
    
}