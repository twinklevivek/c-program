#include<stdio.h>
void area()
{
    float pi,r,area;
    printf("enter pi: r:");
    scanf("%f %f",&pi,&r);

    area=pi*r*r;
    printf("area of circle = %f",area);
}
int main()
{
 area();
}