#include<stdio.h>
int main ()
{
int i=1.j,z=11;
do
{

int j=1;
do
{
printf("\t %d", z++);
j++;
}
while(j<=i);
printf("\n");
i++;
z+=5;
}
while(i<=5);
return 0;
}