#include<stdio.h>
int main()
{
    int a[5],b[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf(" enter a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
     for(i=0;i<5;i++)
    {
        printf("enter b[%d]:",i+1);
        scanf("%d",&b[i]);
    }
    printf("\n-----array -----\n");
    for(i=0;i<5;i++)
    {
        printf("a[%d]:%d\n",i,a[i]);
    }
    printf("\n ---------array ----\n");
    for(i=0;i<5;i++)
     {
        printf("b[%d]:%d\n",i,b[i]);
}
printf("\n------array-----\n");
printf("(A)\t(B)\t A+B\n");
for(i=0;i<5;i++)
    {
       printf("%d\t%d\t%d\n",a[i], b[i], a[i]+b[i]);
}
     return 0;
  }