//swapping value using pointer

#include<stdio.h>
int main()
{
    int a,b,*p,*q,c;
    int i;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("\n a=%d b=%d",a,b);
    p = &a;
    q = &b;

    c=*p;
    *p=*q;
    *q=c;
    
    printf("\n a=%d b=%d\n",a,b);
}