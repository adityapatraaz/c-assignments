#include<stdio.h>
int main()
{
	int a,i;
	printf("2");
	for(a=3;a<1000;a++)
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			break;
		}
		if(i==a)
		printf(" %d",a);
	}
	return 0;
}
