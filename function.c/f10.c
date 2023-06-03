#include<stdio.h>
void a()
{
    float p,r,n,a;
    printf("enter p:r:n");
    scanf("%f %f %f",&p,&r,&n);

    a=p*(1+(r/100)/n)-p;
    printf("a = %f",a);
}
int main()
{
  a ();
}
