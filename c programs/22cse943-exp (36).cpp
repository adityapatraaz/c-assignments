#include<stdio.h>
void main()
{
	int movie=1;
	switch(movie=(2+movie))
	{
		default: printf("Traffic");
		case 4: printf("Sultan");
		case 5: printf("Dangal");
		case 8: printf("Bahubali");
	}
}
