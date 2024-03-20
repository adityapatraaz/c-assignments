#include<stdio.h>
#include<string.h>
int main()
{
	char a[25],b;
	int c,i;
	printf("Input the character :");
	scanf("%c",&b);
	printf("Input the the first the string :");
	scanf("%s",&a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b)
		c++;
	}
	printf("Frequency of the character is %d",c);
}
