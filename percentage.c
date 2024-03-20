#include<stdio.h>
void main()
{
    float math,physics,pps,percentage,tmark;
    printf("Enter the marks obtained in math :");
    scanf("%f",math);
    printf("Enter the marks obtained in physics :");
    scanf("%f",physics);
    printf("Enter the marks obtained in pps :");
    scanf("%f",pps);
    tmark=math+physics+pps;
    percentage=tmark/3;
    printf("Percentage obtained = %.2f",percentage);
}