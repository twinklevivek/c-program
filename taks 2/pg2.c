#include<stdio.h>
int main()
{
int number;

printf("entar number : ");
scanf ("%d",&number);

if (number%3==0&&number%5==0)
{
printf("%d divisible 3 and 5",number);
}
else
{
printf("%d not divisible 3and 5", number);
}
return 0;
}
