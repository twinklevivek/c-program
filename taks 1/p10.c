#include<stdio.h>
int main()
{
    float t,v,s,m;
    printf("enter s: ");
    scanf ("%f",&s);
    printf("enter v: ");
    scanf("%f",&v);
   printf("enter m: ");
   scanf("%f",&m);
   t=((v+s)+(1-m)*1);
   printf("t:%f",t);
  return 0;
}