#include<stdio.h>
int main()
{
int number1,number2,product;
printf("enter two number: ");
scanf("%d  %d", &number1,&number2);

product=number1*number2;

if(product%3==0&& product%7==0)
{
printf("%d and %d divisible 3and 7.\n ",number1,number2,product);
 }
else
{
printf("product%d and %d is not divisible sum3and 7.\n",number1,number2,product);
}
return 0;
}