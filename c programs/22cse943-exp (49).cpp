#include<stdio.h>
#include<math.h>
int main()
{
	int a,n,i,f=1,j;
	float sum=1;
	printf("Input the value for X :");
	scanf("%d",&a);
	printf("Input the value for n :");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
		for(j=2;j<=i;j++)
			f*=j;
		if(i%4==0)
		sum+=pow(a,i)/f;
		else
		sum-=pow(a,i)/f;
	
	}
	printf("Sum = %.3f",sum);
	return 0;
}
