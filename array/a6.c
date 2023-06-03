#include<stdio.h>
int main()
{
    int a[10],total= 0;
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
    for (i=0; i<10; i++)
        if(a[i]%2==1)
        {
        printf("\n %d  %d",i+1,a[i]);
    }
        printf("\n odd no total:");
     for (i=0; i<10;i++)
     {   
         if(a[i]%2==1)
        total=total+a[i];
     }  
     printf("%d",total);
   return 0;
  }