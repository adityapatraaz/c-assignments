#include "stdio.h"
int main()
{
    float a,c;
    printf("Enter the value fahrenheit:");
    scanf("%f",&a);

    c=((a-32)*5)/9;
    printf("Celsius:%f",c);
    return 0;
}