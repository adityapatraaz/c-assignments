#include "stdio.h"
void main()
{
    int a;
    printf("Enter the digit between the range 0-6:");
    scanf("%d",&a);

    if (a==0)
    printf("Sunday");

    else if(a==1)
    printf("Monday");

    else if(a==2)
    printf("Tuesday");

    else if(a==3)
    printf("Wednesday");

    else if(a==4)
    printf("Thrusday");

    else if(a==5)
    printf("Friday");

    else if(a==6)
    printf("Saturday");

    else
    printf("You entered wrong input");
}
