#include<stdio.h>
int main()
{	
  int i,j;
  for(i=1;i<=9;i+=2)
{
 for(j=1;j<=9;j+=2)
{
 printf("\t %d",i);
 }
 printf("\n",j);
  }
return 0;
}