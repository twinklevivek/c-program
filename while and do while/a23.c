#include<stdio.h>
int main()
{	
  char i='A',j;
do
{
j='A';
do
{
 printf("\t %c",i);
j++;
 }
while(j<=i);
 printf("\n",j);
 i++;
  }
while(i<='E');
return 0;
}