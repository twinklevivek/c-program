#include<stdio.h>
int main()
{
 int i,j=0;
 printf("\n character: A-a  or  Z-z");
 for(i=65; i<=90; i++)
{
    j=i+32;
    printf("\n %c - %c", i,j);
    }
 return 0;
}