#include<stdio.h>
int main()
{
   int i ;
   for(i=1;i<=10;i++)
{
   printf("\n hello %d", i);
}
  for(i=11;i<=20;i++)
{
 printf("\n\t hello %d",i);
}
 for(i=21;i<=30;i++)
{
 printf("\n\t\t hello %d",i);
}
 for(i=31;i<=40;i++)
{
 printf("\n\t\t\t hello %d",i);
}
 for(i=41;i<=50;i++)
{
 printf("\n\t\t\t\t\t hello %d",i);
}
 for(i=50;i>=41;i--)
{
 printf("\n\t\t\t\thello %d",i);
}
 for(i=40;i>=31;i--)
{
printf("\n\t\t\t hello %d",i);
}
 for(i=30;i>=21;i--)
{ 
   printf("\n\t\t hello %d",i);
}
 for(i=20;i>=11;i--)
{
 printf("\n\t hello %d",i);
}
 for(i=10;i>=1;i--)
{
printf("\n hello %d",i);
}
return 0;
 }