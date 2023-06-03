#include<stdio.h>
int main()
{
  int n;
  printf("enter a number : ");
  scanf("%d",&n);
  int i=-n;
while(i <= n)
{
  printf("%d", i++);
}
   return 0;
}