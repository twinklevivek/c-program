#include<stdio.h>
int main()
{
    int a[10],total=0;
    int i;
    for (i=0;i<10; i++)
    {
       printf("enter a[%d]:",i+1);
       scanf("%d",&a[i]);
    }
    printf("\n-----------array is----------\n");
    for (i=0; i<10; i++)
    {
        printf("\n a[%d]:%d",i+1,a[i]);
    }
    printf("\n odd no:");
    for (i=0; i<10;i=i+2)
    {
        printf("\n %d",a[i]);
    }  
    printf("\n odd no total:");
     for (i=0; i<10;i=i+2){
        total=total+a[i];
     }  
     printf("%d",total);
}