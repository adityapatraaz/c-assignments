 #include <stdio.h>
int fac(int);
int main()
{ int num =145,sum=0,rem,temp;
temp=num;
while(num>0)
{rem=num%10;
sum=sum+ fac(rem);
num/=10;
}
if(sum==temp)
printf("strong no%d",sum);
else
printf("not%d",sum);
return 0;
}
int fac(int x)
{ int z=1,i;
 for(i=x;i>=1;i--)
{
  z=z*i;
}return z;
}
