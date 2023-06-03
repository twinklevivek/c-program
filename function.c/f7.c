#include<stdio.h>
int I(){
    int c,d,g,h,l;
    printf("print c: d: g: h:");
    scanf("%d %d %d %d",&c,&d,&g,&h);
    l=(c+d)*(g+h);
    return l;
}
int main()
{
    int x;
    x=I();
    printf("answer is:%d",x);
}