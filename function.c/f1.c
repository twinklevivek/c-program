#include<stdio.h>
void mul()
{
  float a,b,c;
  printf("entar a value of a: ");
  scanf("%f",&a);

  printf(" entar a dollar value of b: ");
  scanf("%f",&b);

 c=a*b;
printf("%.2f",c);

}
int main()
{
  printf("dollar prise\n");
  mul();
  printf("\n ------\n");
}