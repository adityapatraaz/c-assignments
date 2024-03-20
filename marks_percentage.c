#include<stdio.h>
int main()
{
	int a,b,c;
	float d;
	printf("Enter the marks of Phy");
	scanf("%d",&a);
		printf("Enter the marks of DSA");
	scanf("%d",&b);
		printf("Enter the marks of English");
	scanf("%d",&c);
	d=(float)
	(a+b+c)*100/300;
	printf("The percentage is %f",d);
	if(d>=90)
	printf("\nYour grade is O");
	else
	if(d>=80)
	printf("\nYour grade is E");
	else if(d>=70)
	printf("\nYour grade is A");
	else
	if(d>=60)
	printf("\nYour grade is B");
	else if(d>=50)
	printf("\nYour grade is C");
	else
	if(d>=40)
	printf("Your grade is D");
	else printf("Fail");
	
}
