#include<stdio.h>
#include<math.h>
int main()
{
       float a,b,c,d,x,x1,x2;
       printf("Enter the value of a,b and c for equation ax^2+bx+c \n");
       scanf("%f%f%f",&a,&b,&c);
       d=(b*b-(4*a*c));
       switch(d>=0)
       {
       	case 1:
       		switch(d==0)
       		{
			       case 1:
				       x=-b/(2*a);
					printf("Root of the equation = %f",x);
					break;
				case 0:
				       x1=(-b+sqrt(d))/2*a;
					x2=(-b-sqrt(d))/2*a;
					printf("Root of the equation = %f and %f",x1,x2);
					break;
			}
			break;
		case 0:
		       printf("Roots are imaginary");
			break;	
	}
	return 0;
}
       
