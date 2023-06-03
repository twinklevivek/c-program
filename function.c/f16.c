#include<stdio.h>
int coins()
{
    int a[10]={2000,500,200,100,50,20,10,5,2,1};
    int i,n;
    printf("enter number:");
    scanf("%d",&n);
    for (i=0; i<10; i++)
    {
        if (n>=a[i])
        {
            printf("\n %d notes :%d",a[i],n/a[i]);
            n=n%a[i];
        }
    }
}
int main()
{
 coins();
}