#include<stdio.h>
int main()
{	
  char i='A',j;
 while(i<='E')
 // for(i='A';i<='E';i++)
{
// for(j='A';j<='E';j++)
j='A';
while(j<='E')
{
 printf("\t %c",i);
 j++;
 }
 printf("\n");
 i++;
  }
return 0;
}