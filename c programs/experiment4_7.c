#include "stdio.h"
int main()
{
    int a,b,c,p,q,r;
    printf("Enter the first number:");
    scanf("%d",&a);

    printf("Enter the second number:");
    scanf("%d",&b);

    printf("Enter the third number:");
    scanf("%d",&c);

    p= a++ + b++ + c;
    q= a-- + --b + c++;
    r= ++p + ++q;

    printf("\n %d",p);
    printf("\n %d",q);
    
    printf("\n %d",r);

    return 0;

}