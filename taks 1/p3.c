# include<stdio.h>
int main()
{
   float principle,intrest,years, SI;
  
  printf("Enter principle (amount): ");
  scanf("%f",   &principle);
 
  printf("Enter intrest: ");
  scanf("%f", &intrest);

  printf("Enter years: ");
  scanf("%f", &years);
  
  SI =(principle*intrest*years)  /100;
   printf("simple interest= %f", SI );
   return 0;
}