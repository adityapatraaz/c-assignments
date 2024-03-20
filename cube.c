#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("Enter the number :");
    scanf("%d",&a);
    b=pow(a,3);
    printf("Cube of %d using power function is %d\n",a,b);
    printf("Cube of %d without power function is %d \n",a,a*a*a);
    return 0;
}