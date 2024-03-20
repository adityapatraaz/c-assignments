#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[25],c[3];
	printf("Input the the first the name :");
	gets(a);
	printf("Input the the second the name :");
	gets(b);
	c[3]={' '};
	strcat(a,c);
	strcat(a,b);
	printf("Full name is ");
    puts(a);
	return 0;
}
