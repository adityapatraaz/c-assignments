#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Caught fishes by John : ");
	scanf("%d",&a);
	printf("Caught fishes by Ram : ");
	scanf("%d",&b);
	printf("Caught fishes by Shah : ");
	scanf("%d",&c);
	a>b?(a>c?printf("John caught more fish"):printf("Shah caught more fish")):(b>c?printf("Ram caught more fish"):printf("Shah caught more fish"));
	return 0;
}
