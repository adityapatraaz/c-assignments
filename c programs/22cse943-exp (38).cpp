#include<stdio.h>
int main()
{
	float a,b;
	printf("Height of rose plant(in cm) = ");
	scanf("%f",&a);
	printf("Height of lily plant(in cm) = ");
	scanf("%f",&b);
	if(a>b)
	   printf("Rose plant has more height");
	else
	   printf("Lily plant has more height");
	return 0;      
}
