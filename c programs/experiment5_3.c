#include "stdio.h"
void main()
{
    int a,b;

    printf("Enter the height of Rose plant in centimeters:");
    scanf("%d",&a);

    printf("Enter the height of Lily plant in centimeters:");
    scanf("%d",&b);

    if(a>b)
    printf("Rose plant height is greter than lily plant height.");

    else
    printf("Lily plant height is greter than Rose plant height.");
}


