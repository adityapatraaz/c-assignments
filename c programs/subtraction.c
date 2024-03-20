#include<stdio.h>
void subtraction(int x , int y)
{
    if(x>y)
    printf("Subtration of larger number with smaller number is %d",x-y);
    else if(x==y)
    printf("Both are equal");
    else 
    printf("Subtration of larger number with smaller number is %d",y-x);
}
void main()
{
    int a,b;
    printf("Enter the first integer :");
    scanf("%d",&a);
    printf("Enter the second integer :");
    scanf("%d",&b);
    subtraction(a,b);
}