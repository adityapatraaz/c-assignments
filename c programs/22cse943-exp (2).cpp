#include<stdio.h>
int main()
{
	int a;
	printf("Enter number between 0 to 06 - ");
	scanf("%d",&a);
	if(a>=07)
	   printf("Invalid input");
	else if(a==0)
	       printf("Sunday");
       else if(a==1)
	       printf("Monday"); 
	else if(a==2)
	       printf("Tuesday"); 
	else if(a==3)
	       printf("Wednesday"); 
	else if(a==4)
	       printf("Thursday"); 
	else if(a==5)
	       printf("Friday"); 
	else if(a==6)
	       printf("Saturday");
	return 0;	 				       
}
