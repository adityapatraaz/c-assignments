#include <stdio.h>
void main()
{
int a,b,c;
printf("enter the integers:");
scanf("%d%d%d",&a,&b,&c);
swich(a>b)
{
    case 1:
    {
        switch (a>c)
        {
        case 1:
        printf("the greater no is%d",a);
            break;
        
        case 0:
        printf("the greater no is%d",c);
            break;
        }
    }
    case 0:
    {
        switch (b>c)
        {
        case 1:
        printf("the greater no is%d",b);
            break;
        
        case 0:
        printf("the greater no is%d",c);
            break;
        }
        
     }
    break;
     return 0;
}