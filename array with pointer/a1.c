//array with pointer

#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int i, *p;
    p = &a;

    for (i=0; i<5; i++)
    {
        // printf("%d\t %u \n",a[i],&a[i]);
        printf("%d\t %u \n",*(p+i),(p+i));
 }
}