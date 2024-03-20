#include<stdio.h>
int sum(int x,int y);
int main(){
	int a,b,c;
	printf("Enter the values:\n");
	scanf("%d %d",&a,&b);
	c=sum(a,b);
	printf("sum is %d",c);
}
//function define
int sum(int x,int y)
{
	return x+y;
}
