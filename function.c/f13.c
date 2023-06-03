#include<stdio.h>
int base(){
    float base,area;
    printf("enter base:");
    scanf("%f",&base);
    area = 0.5*base*height;
    return area;
}
int height(){
    float height,area;
    printf("enter height:");
    scanf("%f ",&height);
    area = 0.5*base*height;
    return height;
}
int main()
{
    int x;
    x=base();
    printf("area :%f",x);

    int y;
    y=height();
    printf("height :%f",y);

}