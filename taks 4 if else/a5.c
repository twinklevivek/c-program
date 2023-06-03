#include<stdio.h>
int main()
{
 float a1,a2,a3,a4,a5,a6,total,percentage;
 printf("\n marks of 6 subject: ");
 scanf("\n%f %f %f %f %f %f,",&a1,&a2,&a3,&a4,&a5,&a6);

 total=a1+a2+a3+a4+a5+a6;
 printf("\ntotal is :(%f)", total);

 percentage=total/600*100;
 printf("\npercentage is :(%f)",percentage);

 if(percentage>=75)
 {
   printf("\n grade a");
 }
 else if(percentage>=60 && percentage<=75)
 {
    printf("\n grade b ");
 }
 else if (percentage>=45 && percentage<=60)
 {
    printf("\n grade c ");
 }
  else if (percentage>=35 && percentage<=35)
 { 
      printf("\n grade d: ");
 }
 else
 {
     printf("\n faill");
 }

}