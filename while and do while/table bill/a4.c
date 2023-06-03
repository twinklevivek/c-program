#include<stdio.h>
int main()
{
int i,j;
i=0;
row:
  if(i<=5)
{
  printf("\n",i++);
  j=1;
 col:
 if(j<=i)
{
 printf("*",j++);
 goto col:
}
goto row:
return 0;
}