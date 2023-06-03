#include<stdio.h>
int main()
{
    int i,j,z=11;
    for(i=1;i<=5;i++)
{
   for(j=1;j<=5;j++)
   {
   printf("\t %d",z++);
   }
   z+=5;
   printf("\n");
}
}