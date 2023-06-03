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
    printf("\n even no:");
    for (i=0; i<10; i++)
        if(a[i]%2==0)
        {
        printf("\n %d  %d",i+1,a[i]);
    }
        printf("\n even no total:");
     for (i=0; i<10;i++)
     {   
         if(a[i]%2==0)
        total=total+a[i];
     }  
     printf("%d",total);
   return 0;
  }