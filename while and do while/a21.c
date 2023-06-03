#include<stdio.h>
int main()
{
char ch='A';
int i=1;
do
{
int j=1;
do
{
printf("\t %c", ch++);
j++;
}
while(j<=i);
printf("\n");
i++;
}
while(i<=6);
return 0;
}
