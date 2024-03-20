#include<stdio.h>
int main()
{
     int a,b,c;
     	printf("Enter the value for a : ");
	scanf("%d",&a);
	printf("Enter the value for b : ");
	scanf("%d",&b);
	printf("Enter the value for c : ");
	scanf("%d",&c);
	switch(a>b)
	{	
	       case 1:
	     	       switch(a>c)
	     	       {
	     		       case 1:
	     			       printf("%d is greater",a);
	     			       break;
	     		       case 0:
			              printf("%d is greater",c);
	     			       break;	
		       }
		break;       
		case 0:
			switch(b>c)
			{
	     		       case 1:
	     			       printf("%d is greater",b);
	     			       break;
	     		       case 0:
			              printf("%d is greater",c);
	     			       break;		     
	              }
	       break;       
       }
	return 0;
}
