#include<stdio.h>
int main ()
{
   int x,y;
   printf("enter x: ");
   scanf("%d",&x);

  printf("enter y: ");
  scanf("%d",&y);

  if(x<2000 && x>3000)
{
   printf("%d", x);
}
 else if(y>100 && y<500)
  {
    printf("%d",y);
}
else
{
  printf("please enter vaid value");
}
return 0;
}