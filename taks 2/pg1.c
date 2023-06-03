#include<stdio.h>
int main()
{
int number;
printf("enter number : ");
scanf("%d",& number);

if(number%5==0)
{
printf("%d is divisible by 5",number);
}
else
{
printf("%d is not divisibleby  5",number);
}
return 0;
}
