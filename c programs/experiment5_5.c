#include "stdio.h"
#include "math.h"
int main()
{
    int a,b,c;
    float d,e,f;

    printf("Enter the value as shown in equation Ax2+Bx+C=0");

    printf("\n Enter the value of A:");
    scanf("%d",&a);
    
    printf("\n Enter the value of B:");
    scanf("%d",&b);
    
    printf("\n Enter the value of C :");
    scanf("%d",&c);

    d=sqrt((b*b)-4*a*c);
    e=((-b+d)/2*a);
    f=((-b-d)/2*a);

    printf("The real root first:%f",e);
    printf("The real root second:%f",f);

    return 0;

}
