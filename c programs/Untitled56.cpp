#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value of the array");
	scanf("%d",&a);
	int b[a],i,sum=0;
	printf("Enter the value");
	
	for (i=0;i<a;i++)
	{   scanf("%d",&b[i]);
       	sum+=b[i]*b[i];
}
		printf("sum of the number =%d  ",sum);
	return 0;

}

