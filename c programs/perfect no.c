 #include <stdio.h>
 int main()
 {
 int i,j,sum=0;
 scanf("%d",&i);
 for(j=1;j<i;j++)
 {
     if(i%j==0)
   {
     sum+=j;
   } 
 }
 if(sum==i)
 printf("perfect");
 else
 printf("not");
 return 0;
 }
