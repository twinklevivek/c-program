 #include<stdio.h>
int main()
{	
  int i,j;
  for(i=2;i<=10;i+=2)
{
 for(j=2;j<=i;j+=2)
{
 printf("\t %d",i);
 }
 printf("\n",j);
  }
return 0;
}