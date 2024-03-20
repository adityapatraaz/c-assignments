#include<stdio.h>
int main()
{
	int a=392,b=308,c=490,r,p;
	while(b>0)
	{
		r=a%b;
	       a=b;
	       b=r;
	}
	while(c>0)
	{
		p=a%c;
		a=c;
		c=p;
	}
	printf("Greatest lenght of string that bundle can be cut = %d",a);
	return 0;
}
