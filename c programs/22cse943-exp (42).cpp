#include<stdio.h>
int main()
{
	int i,j;
	char a[20],b[20];
	printf("Input the string :");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		j=i+1;
		for(  ;a[j]!='\0';j++)
		{
		
		if(a[i]>a[j])
		{
			a[j]=a[j]+a[i];
			a[i]=a[j]-a[i];
			a[j]=a[j]-a[i];		
			b[i]=a[i];
		}
	}
	}
	b[i]='\0';
	printf("alphabatic order is");
	printf(" %s",b);
	return 0;
}
