#include<stdio.h>
int main()
{
    int a[10][10],total1=0,total2=0,total3=0,i,j;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
        printf("\n enter a[ %d ][ %d ]:",i,j);
        scanf("%d",&a[i][j]);
        }    
    }

    printf("\n\t-----------matrix a------------\n\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("\t %d",a[i][j]);
        }
        printf("\n");
    }  
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
         if(i==j)
         {
             total1=total1+a[i][j];
         }
         else if(i<j)
         {
             total2=total2+a[i][j];
         }
         else
         {
             total3=total3+a[i][j];
         } 
        }  
    printf("\n");
    }
    printf("total diagonal= %d",total1);
    printf("\nupper triangle= %d",total2);
    printf("\nlower triangle= %d",total3);

return 0;
}