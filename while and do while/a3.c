#include<stdio.h>
int main()
{
int n;
printf("enter a number: ");
scanf("%d",&n);

int i=1;
while(i <= n)
{
printf ("\n%d", i);
i++;
}
return 0;
}