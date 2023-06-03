#include<stdio.h>
int main()
{
     int number1, number2,number3,largest;
     printf("enter three number: ");
     scanf("%d %d %d", &number1, &number2,&number3);
     
          if(number1 > number2  && number1>number3)
     {
           printf("\nnumber1(%d)is largest ", number1);
      }
 else
      {
              if(number2>number3)
      {
           printf("\nnumber2(%d)is largest", number2);
       }
 else
      {
           printf("\nnumber3(%d)is largest ", number3);
       }
    }
           return 0;
}