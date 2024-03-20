 #include <stdio.h>
 int main()
 {int i,j,c=0;
 scanf("%d",&i);
 for(j=1;j<=i;j++)
 {if(i%j==0)
 c++;
 }if(c==2)
 printf("prime");
 else
 printf("not");
 return 0;
 }
