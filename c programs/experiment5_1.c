#include "stdio.h"
int main()
{
    int a,b,c;

    printf("Enter the fish caught by John:");
    scanf("%d",&a);

    printf("Enter the fish caught by Ram:");
    scanf("%d",&b);

    printf("Enter the fish caught by Shah:");
    scanf("%d",&c);

    if (a>b&&a>c)
    printf("John caught more fish than others.");

    else if(b>a&&b>c)
    printf("Ram caught more fish than others.");

    else
    printf("Shah caught more than others.");

    return 0;
    
}