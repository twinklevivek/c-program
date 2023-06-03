#include<stdio.h>
int interest()
{
    float p,t,r,si;
    printf("enter p ,t,r :");
    scanf("%f %f %f",&p,&t,&r);

    si=p*t*r/100;
    printf("si is: %f",si);

    return 0;
}
int main()
{
  interest ();
}