#include<stdio.h>
int main()
{
float a,p,r,n;
printf("enter p: ");
scanf("%f",&p);
printf ("enter r: ");
scanf("%f",&r);
printf("enter n: ");
scanf("%f",&n);
a=p*(1+(r/100)/n)-p;
printf("a:%f",a);
return 0;
}