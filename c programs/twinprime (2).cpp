#include<stdio.h>
int main()
{
	int a,i,z[20],p,j=0,c;
	for(a=51;a<=100;a++)
	{
		for(i=2;i<=a/2;i++)
		{
			if(a%i==0)
			p=0;
			else
		    {
		    	p=1;
		    	c++;
			}
		}
		if(p==1)
		{
			z[j]=a;
			j++;
		}
	}
	printf("Twins prime number are : \n");
	for(j=0;j<c;j++)
	{
		for(i=0;i<c;i++)
		{
			if(z[j]-z[i]==2)
			printf("%d and %d\n",z[j],z[i]);
		}
	}
	return 0;
}
