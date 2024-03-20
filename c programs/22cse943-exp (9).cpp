#include<stdio.h>
#include<string.h>
int main()
{
	char a[200],b[25];
	int c,i;
	printf("Input the the paragraph :");
	scanf("%[^\n]",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		c++;
	}
	printf("Number of word present =%d",c);
	return 0;
}
