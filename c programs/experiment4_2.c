#include "stdio.h"
int main()
{
    float a,b,c,e;
    float d;
    printf("Enter the marks of physics:");
    scanf("%f",&a);

    printf("Enter the marks of chemistry:");
    scanf("%f",&b);
    
    printf("Enter the marks of maths:");
    scanf("%f",&c);

    
    d=(((a+b+c)/120)*100);

    printf("Percentage obtained by the student:%f",d);

    return 0;
}