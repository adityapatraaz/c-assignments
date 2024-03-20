#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the lenght of two rods : \n");
	scanf("%d%d",&a,&b);
	do
	{
		c=a%b;
		a=b;
		b=c;
	}while(b>0);
	printf("The maximum length of each piece = %d",a);
	return 0;
}
