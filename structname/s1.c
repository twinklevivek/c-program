















































































#include<stdio.h>
struct bill
{
    int productno,price,qty,rate,dis,ratead,gst,billamt;
    char productname[50];
};

int main()
{
    struct bill arr[10];
    int i;
    printf("enter data:---\n");
    for (i=0; i<3; i++)
    {
        printf("enter productno:");
        scanf("%d",&arr[i].productno);
        printf("enter productname:");
        scanf("%s",&arr[i].productname);
        printf("enter price:");
        scanf("%d",&arr[i].price);
        printf("enter qty:");
        scanf("%d",&arr[i].qty);
    }
    printf("pno \tpname \tprice \tqty \trate \tdis \trated \tgst \tbillamt");
    for (i=0; i<3; i++)
    {

        arr[i].rate = arr[i].price * arr[i].qty;
        arr[i].dis =  arr[i].rate*0.10;
        arr[i].ratead =arr[i].rate - arr[i].dis;
        arr[i].gst =arr[i].ratead*0.18;
        arr[i].billamt = arr[i].ratead + arr[i].gst;

        printf("\n%d \t%s \t%d \t%d \t%d \t%d \t%d \t%d \t%d",arr[i].productno,arr[i].productname,arr[i].price,arr[i].qty,arr[i].rate,arr[i].dis,arr[i].ratead ,arr[i].gst ,arr[i].billamt);
}
}