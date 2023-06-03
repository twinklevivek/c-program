#include<stdio.h>
int t(){
    int v,s,m,t;
    printf("enter v: s: m:");
    scanf("%d %d %d",&v,&s,&m);
    t=((v+s)+(1-m)*1);
    return t;
}
int main()
{
    int x;
    x=t();
    printf("answer:%d",x);

}