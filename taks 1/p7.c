#include<stdio.h>
int main()
{  
   float x,k,a;
   printf("enter k: ");
   scanf("%f", &k );
   printf ("enter a: ");
   scanf("%f",&a);
   x=((k-4) *(a*4))/100;
  printf ("x: %f", x);
  return 0;
}