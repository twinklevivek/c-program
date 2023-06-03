#include<stdio.h>
int dollar()
{
    int rupees,dollar;
    printf("enter rupees:");
    scanf("%d",&rupees);

    dollar=rupees*75;
    return dollar;
}

int main()
{
    int x;
    x=dollar();
    printf("dollar is %d",x);
}