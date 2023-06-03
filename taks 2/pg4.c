#include<stdio.h>
int main()
{
int number1,number2,product, sum;
printf("enter two number: ");
scanf("%d  %d", &number1,&number2);

product=number1*number2;
sum=number1+number2;
if(product%sum==0)
{
printf("%d and %d divisible sum%d.\n", number1,number2,product,sum);
 }
else
{
printf("%d and %d is not divisible sum %d.\n",number1,number2,product,sum);
}
return 0;
}