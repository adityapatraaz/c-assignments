#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[25],c[50];
	printf("Input the the first the string :");
	scanf("%s",&a);
	printf("Input the the second the string :");
	scanf("%s",&b);
	strcat(a,b);
	printf("Sum of two string is %s",a);
	return 0;
}
