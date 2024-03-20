#include "stdio.h"
int main()
{
    int a,b;
    printf("Enter the age of first person:");
    scanf("%d",&a);

    printf("Enter the age of second person:");
    scanf("%d",&b);

    if (a>b)
    printf("First person is elder than second person.");
    else
    printf("Second person is elder than first person.");

    return 0;
}