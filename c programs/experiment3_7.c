#include "stdio.h"
int main()
{
    float a,c;
    int b,d;
    printf("Enter the float number:");
    scanf("%f",&a);

    b=a;
    c=a-b;
    d=a-c;

    
    printf("\n The integral part is %d",d);
    printf("\n The float  part is %f",c);
    return 0;
}