#include<stdio.h>
int main()
{
       int a[10],i,n,m=0;
       printf("Enter 10 values for array :");
       for(i=0;i<10;i++)
       scanf("%d",&a[i]);
       printf("Enter the value needed for search :");
       scanf("%d",&n);
       for(i=0;i<10;i++)
       {
       	if(a[i]==n)
       	{
       		m=1;
       		break;
		}
	}
	if(m==1)
	printf("Your number exists in array in %d position",i+1);
	else
	printf("Number doesnot exists");
       return 0;
}
