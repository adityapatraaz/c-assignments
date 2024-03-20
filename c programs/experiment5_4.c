#include "stdio.h"
void main()
{
    int a,b,c;

    printf("Enter the job experience of Manvi in years:");
    scanf("%d",&a);

    printf("Enter the job experience of Shyam in years::");
    scanf("%d",&b);

    printf("Enter the job experience of William in years::");
    scanf("%d",&c);

    if(a>b&&a>c)
    printf("The team lead must given to Manvi.");

    else if(b>a&&b>c)
    printf("The team lead must given to Shyam.");

    else
    printf("The team lead must given to William.");
}
