#include "stdio.h"
int main()
{
    int r1,r2,r3,r4,r5,r6,r7,x,y,z;

    printf("Enter the value of x:");
    scanf("%d",&x);

    printf("Enter the value of y:");
    scanf("%d",&y);

    printf("Enter the value of z:");
    scanf("%d",&z);

    r1=x>y>z;
    r2=x<y<z;
    r3= x==y==z;
    r4=(x=y>z);
    r5=(x==y)&&(y==0);
    r6=x=x>>2;
    r7=!(x=0);

    printf("\n value of r1 %d",r1);
    printf("\n value of r2 %d",r2);
    printf("\n value of r3 %d",r3);
    printf("\n value of r4 %d",r4);
    printf("\n value of r5 %d",r5);
    printf("\n value of r6 %d",r6);
    printf("\n value of r7 %d",r7);

    

    return 0;
    
}