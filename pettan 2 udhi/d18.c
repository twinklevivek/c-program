#include<stdio.h>
int main()
{	
  char ch='A';
  int i,j;
 for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
 printf("\t %c",ch++);
 }
 printf("\n");
  }
return 0;
}