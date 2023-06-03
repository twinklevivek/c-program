#include<stdio.h>
int main()
{
  int i=1,sum=0;
 while(i<=10)
{
  sum +=i;

  printf("\n total  number  of  total value %d", sum);
  i++;
  printf("\n evenumber  of  total value %d", sum++);
  i++;
  printf("\n oddnumber  of  total value %d", ++sum);
  i++;
  }
return 0;
}