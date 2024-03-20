#include<stdio.h>
int main()
{
       int a;
     	printf("Enter the percentage : ");
	scanf("%d",&a);
	switch(a)
	{
		case 80 ... 100:
			printf("O grade");
			break;
		case 60 ... 79:
			printf("A grade");
			break;
		case 50 ... 59:
			printf("B grade");
			break;
		case 40 ... 49:
			printf("C grade");
			break;
		case 0 ... 39:
			printf("F grade");
			break;				
	}
	return 0;
}

		       
