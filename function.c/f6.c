#include<stdio.h>
void chair()
{
    int totalchair,totalcost,eachchair;
    printf("totalchair,totalcost,chair");
    scanf("%d %d %d",&totalchair,&totalcost,&eachchair);

    eachchair=totalcost/totalchair;
    printf("eachchair:%d",&eachchair);
}
int main()
{
  chair();
}
