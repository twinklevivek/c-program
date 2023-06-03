#include<stdio.h>
int main()
{	
  char c= 'A';
int i,j,z;
  
 for(i='A';i<='E';i++)
{
for(j='A';j<='E';j++)
{
 printf("\t %c",c++);
 }
 printf("\n");
  }
return 0;
}