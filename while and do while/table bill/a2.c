#include<stdio.h>
int main()
{
   int studentname,rollno,sci,maths,eng,phy,che,bio;
   float total,percentage;
    
   printf("\nstudent name A:");
  
   printf("\nrollno:\t");
   scanf("%d",&rollno);

   printf("\nsubject");
   printf("\nsci:\t");
   scanf("%d",&sci);

   printf("maths:\t");
   scanf("%d",&maths);
   
   printf("eng:\t");
   scanf("%d",&eng);

    printf("phy:\t");
    scanf("%d",&phy);
   
    printf("che:\t");
    scanf("%d",&che);

    printf("bio:\t");
    scanf("%d",&bio);
   
    total=sci+maths+eng+phy+che+bio;
   printf("\n total is:(%f)",total);

 percentage=total/600*100;
   printf("\npercentage is :(%f)",percentage);

    if(percentage>=75)
    {
        printf("\n grade A");
    }
    else if(percentage>=60 && percentage<=75)
    {
        printf("\n grade B");
    }
    else if(percentage>=45 && percentage<=60)
    {
        printf("\n grade C");
    }
    else if(percentage>=35 && percentage<=45)
    {
        printf("\n grade D");
    }
    else
    {
        printf("\n fail");
    }
}