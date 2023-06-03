#include<stdio.h>
int main ()
{
  float basicsalary, grossalary,da,hra;
  printf("enter the besic salary of the employee: ");
  scanf("%f",&basicsalary);
  

  da=basicsalary*0.8;
  hra+basicsalary*0.15;

 grossalary=basicsalary+da+hra;

 printf("gross salary of the employee is :%f\n", grossalary);

 return 0;
}