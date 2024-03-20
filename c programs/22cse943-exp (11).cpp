#include<stdio.h>
#include<string.h>
int main()
{
	char a[200],b[25];
	int c,i;
	printf("Input the the paragraph :");
	scanf("%[^\n]",&a);
	toupper(a);
	printf("\n%s",a);
	return 0;
}
