#include "stdio.h"
int main()
{
    int a,b,c;

    printf("Enter the value of A :");
    scanf("%d",&a);

    printf("Enter the value of B:");
    scanf("%d",&b);

    printf("Enter the value of C:");
    scanf("%d",&c);

    
    if (a>b&&a>c)
    printf("A is greater than others");

    else if (b>a&&b>c)
    printf("B is greater  than other");

    else
    printf("C is greter than others");

 return 0;
}
