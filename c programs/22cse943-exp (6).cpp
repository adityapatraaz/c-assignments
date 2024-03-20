#include<stdio.h>
#include<string.h>
int main()
{
	char a[25],b[25];
	int c;
	printf("Input the the first the string :");
	scanf("%s",&a);
	strcpy(b,a);
	strrev(b);
    c=strcmp(a,b);
    if(c==0)
    printf("It is a palindrome");
    else
    printf("It is not a palindrome");
	return 0;
}
