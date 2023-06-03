#include<stdio.h>
int main()
{
  int numberchairs;
  float totalcost,costperchairs;
  printf("entar  numberchairs: ");
  scanf ("%d", &numberchairs);

 printf("entar total cost: ");
 scanf ("%f", &totalcost);

 costperchairs=totalcost/numberchairs;
 printf("cost per chair:%f\n",costperchairs);

 return 0;
}