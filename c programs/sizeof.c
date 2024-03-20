#include<math.h>
int main()
{
	int x,c;
	float y,a;
	char z,b;
	printf("enter the value of x,y and z  ");
	scanf("%d%f%c",&x,&y,&z);
	c=sizeof(x);
	a=sizeof(y);
	b=sizeof(z);
	printf("%d\n",c);
		printf("%f\n",a);
	
		printf("%c\n",b);
	
}
