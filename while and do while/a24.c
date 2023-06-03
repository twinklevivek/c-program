#include<stdio.h>
int main()
{	
  int i=2,j;
  while(i<=10)
{
j=2;
while(j<=i)
{
 printf("\t %d",i);
 j+=2;
 }
 printf("\n",j);
 i+=2;
  }
return 0;
}