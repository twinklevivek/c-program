#include<stdio.h>
int main()
{
   int age;
   
   printf("entar your age: ");
   scanf("%d",&age);

  if(age>=18)
{   
     printf("eligble for vote\n");
}
else
{
      printf("not eligble for vote .\n");
}
 return 0;
}