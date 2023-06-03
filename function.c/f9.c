#include<stdio.h>
int s(){
    float a,b,c,s;
    printf("enter a: b: c:");
    scanf("%f %f %f",&a,&c,&b);
    s=((4*a+c)-2*a*b)/100;
    return s;
}
int main()
{
    int x;
    x=s();
    printf("answer:%f",x);
}

