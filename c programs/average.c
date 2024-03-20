#include<stdio.h>
void avg(int x , int y)
{(float) (x+y)/2;
    printf("Average of %d and %d is %.2f\n",x,y,(x+y)/2);
}
void sum(int x , int y)
{
    printf("Sum of two number is %d\n",x+y);
}
void main()
{
    int a,b;
    printf("Enter the first integer :");
    scanf("%d",&a);
    printf("Enter the second integer :");
    scanf("%d",&b);
    sum(a,b);
    avg(a,b);
}
