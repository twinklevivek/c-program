#include<stdio.h>
int main()
{	
  int i,j,z=11;
 for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
 printf("\t %d",z++);
}
 printf("\n");
 z+=5;
  }
return 0;
}