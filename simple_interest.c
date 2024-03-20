#include<stdio.h>
void main()
{
    int principle,rate,time;
    float si;
    printf("Enter the principle amount :");
    scanf("%d",&principle);
    printf("Enter the rate of interest :");
    scanf("%d",&rate);
    printf("Enter the time period :");
    scanf("%d",&time);
    si=(float)(principle/100)*rate*time;
    printf("Simple interest is %.2f",si);
}
