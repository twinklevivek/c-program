#include<stdio.h>
int display (int maths ,int sci, int eng,int total,float percentage)
{
    printf("\n\t maths \tsci \teng \ttotal \tper \tgrad ");
    printf("\n\t %d \t%d \t%d \t%d \t%.2f ", maths,sci,eng,total,percentage);
if (maths<33 || sci<33 || eng<33)
    {
        printf("\tfail");
    }
    
    else if(percentage>=75)
    {
        printf("\t a");
    }
    else if(percentage>=60 && percentage<=75)
    {
        printf("\t b");
    }
    else if(percentage>=45 && percentage<=60)
    {
        printf("\t c");
    }
    else if(percentage>=35 && percentage<=45)
    {
        printf("\t d");
    }
}

int calc(int maths,int sci, int eng)
{
  int total;    
  float percentage;
    total= maths+sci+eng;
    percentage=(float)total/3;
    display(maths,sci,eng,total,percentage); 
}
int setdata()
{
    int maths,sci,eng;
    printf("enter maths marks:");
    scanf("%d",&maths);
    printf("enter sci marks:");
    scanf("%d",&sci);
    printf("enter eng marks:");
    scanf("%d",&eng);
    calc(maths,sci,eng);   
}
int main()
{
 setdata();
}