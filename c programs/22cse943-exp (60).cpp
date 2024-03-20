#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Years of exprience of Manvi = ");
	scanf("%f",&a);
	printf("Years of exprience of Shyam = ");
	scanf("%f",&b);
	printf("Years of exprience of William = ");
	scanf("%f",&c);
	if(a>b && a>c)
	   printf("Manvi will lead the team");
	else if(b>a && b>c)
	   printf("Shyam will lead the team");
	else
	   printf("Willam will lead the team");
	return 0;      
}
