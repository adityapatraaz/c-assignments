#include <stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=3;i++)
  {
  for(j=1;j<=5;j++)
  if(j>=i && j<=(6-i))
  printf("*\t");
  else
  printf(" \t");
  printf("\n");
  }
return 0;
}
