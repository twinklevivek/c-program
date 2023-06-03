#include<stdio.h>
int main()

{
      int i=5,j=5,b;
      z:
      if(i>=1)
      {
         j=1;
         x:
         if(i>=j)
         {
            printf(" *");
            j++;
            goto x;
         }
         printf("\n");
         j=5;
         y:
         if(j>=i)
         {
            printf(" ");
            j--;
            goto y;
         }
         i--;
         goto z;
      }
return 0;
}

