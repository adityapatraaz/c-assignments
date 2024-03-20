#include "stdio.h"
int main()
{
    int n,i=1;
    printf("enter no");
    scanf("%d",&n);
    do
    {
       printf("%d\t",i);
       i=i+2; 
    } while (i<=n);
    return 0;
    
}