#include<stdio.h>
int main()
{
  int i, n;
  printf("enter n: ");
  scanf("%d",&n);

  printf("number 1 to %d:\n", n);
  for(i=1;i<=n;i++)
{
  printf("%d\n",i);
}
   return 0;
}