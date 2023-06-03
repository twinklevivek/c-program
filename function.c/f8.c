#include<stdio.h>
void x()
{
    float k,a,x;
    printf("enter k: a:");
    scanf("%f %f",&k,&a);
    x=((k-4)*(a*4)/100);
    printf("x= %f",x);
}
int main()
{
 x();
}