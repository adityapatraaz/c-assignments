#include<stdio.h>
#include<string.h>
int main()
{
	char a[25],b[25];
	int c;
	printf("Input the the first the string :");
	scanf("%s",&a);
	printf("Input the the second the string :");
	scanf("%s",&b);
	c=strcmp(a,b);
	if(c<0)
	printf("1");
	else if(c>0)
	printf("2");
	else
	printf("equal");
	return 0;
}
