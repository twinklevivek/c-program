#include<stdio.h>
int task1(){
char a[50],b[50];
int i,j,k;
printf("enter value number:");
gets(a);
 for (i=0; a[i]!='\0'; i++){
    k=i;
 }
  for (j = 0; j<=k; j++)
    {
        b[j]=a[--i];
    }
    b[j]='\0';

    printf(" answer is:%s",b);
}
int main()
{
   task1();
}