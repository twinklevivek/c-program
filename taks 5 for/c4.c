
#include<stdio.h>
int main()
{
  int i,sum=0;
  for(i=1;i<=10;i++)
{
  sum +=i;

  printf("\n total  number  of  total value %d", sum);
  printf("\n evenumber  of  total value %d", sum++);
  printf("\n oddnumber  of  total value %d", ++sum);
  }
return 0;
}