#include<stdio.h>
int main()
{
	int i,j;
	char a[20],b[20];
	printf("Input the string :");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++);
	i--;
	for(j=0;a[j]!='\0';j++,i--)
	b[j]=a[i];
	b[j]='\0';
	for(j=0;a[j]!=b[j];j++);
	if(i==j)
	printf("%s is a palindrome",a);
	else
	printf("%s is not a palindrome",a);
	return 0;
	
}
