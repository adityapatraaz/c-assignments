#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the dividend :");
    scanf("%d",&a);
    printf("Enter the divisor :");
    scanf("%d",&b);
    printf("Quotient is %d and remainder is %d",a/b,a%b);
}