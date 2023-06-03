#include<stdio.h>
int main()
{
    char str[50];
    int i;

    printf("enter string:");
    gets(str);

    for (i=0; str[i];i++);
    printf("reverse string:");
    for(i=i-1; i>=0; i--)
        printf("%c",str[i]);
 return 0;
}