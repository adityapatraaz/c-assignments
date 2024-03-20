#include <stdio.h>
int main()
{
char a[]="good",b[]="gokd";
int i,j,k,h;
for(i=0;a[i]!='\0';i++);
for(j=0;b[j]!='\0';j++);
if(i!=j)
printf("diff");

else{

for(k=0;k<i;k++)
{
if(a[k]!=b[k])
{
	h=0;
	break;
}
else
h=1;
}
if(h==1)
printf("same");
else
printf("not same");}
return 0;
}
