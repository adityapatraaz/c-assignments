#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x,x1,x2;
	printf("Enter the co=efficient of the equation ax^2+bx+c a = ");
	scanf("%f",&a);
	printf("b = ");
	scanf("%f",&b);
	printf("c = ");
	scanf("%f",&c);
	d=(b*b)-(4*a*c);
	if(d<0)
	   printf("Roots are imaginary");
	else if(d==0)
	{
		x=-b/(2*a);
		printf("The root of the equation = %f",x);
	}   
	else
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("The roots of the equation = %.2f and %.2f",x1,x2);
	}
	return 0;
	
}
