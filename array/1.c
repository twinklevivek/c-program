#include<stdio.h>
int main()
{
   int a[10][10],i,j;
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
      printf("\n entar a[%d][%d]:",i,j);
     scanf("%d",&a[i][j]);
    }
}
printf("\n\t-----------matrix A--------\n\n");
for(i=0;i<3;i++)
{
 for (j=0;j<3;j++)
{
 printf("\t%d",a[i][j]);
}
printf("\n");
  }
{
   int b[10][10],i,j;
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
      printf("\n entar b[%d][%d]:",i,j);
     scanf("%d",&b[i][j]);
    }
}
printf("\n\t-----------matrix B--------\n\n");
for(i=0;i<3;i++)
{
 for (j=0;j<3;j++)
{
 printf("\t%d",b[i][j]);
}
printf("\n");