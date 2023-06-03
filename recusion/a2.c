#include<stdio.h>
int newfun(int n)
{
 if(n==1)
   return 1;
else
  return n*newfun(n-1);
}
int main()
{
 int x=newfun(3);
printf("factorial of given number is :%d",x);
}