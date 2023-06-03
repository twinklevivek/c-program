#include <stdio.h>
int main() {
  int prono[5], pri[5], qty[5], rate[5], dis[5], ratead[5], gst[5], billamt[5],total =0;
  int i, a = 0, b = 0, c = 0;
  for (i = 0; i < 5; i++) {
    printf("prono %d:", i + 1);
    scanf("%d", &prono[i]);
  }
  for (i = 0; i < 5; i++) {
    printf("pri %d:", i + 1);
    scanf("%d", &pri[i]);
  }
  for (i = 0; i < 5; i++) {
    printf("qty%d:", i + 1);
    scanf("%d", &qty[i]);
  }
  for (i = 0; i < 5; i++) {
    printf("rate%d:", i + 1);
  }
  { printf("dis%d:", i + 1); }
  { printf("ratead%d:", i + 1); }
  {
    printf("gst%d:", i + 1);
    total = total + gst[i];
  }
  { printf("gst%d:", i + 1); }
  printf("\n------------array is------------\n");
  printf("\nproductno \tprice   qty  \trate \tdis \tratead \tgst \tbillamt");
  for (i = 0; i < 5; i++) {
    printf("\n %d", prono[i]);
    printf("\t\t%d", pri[i]);
    printf("\t %d", qty[i]);

    rate[i] = pri[i] * qty[i];
    printf("\t %d", rate[i]);

    dis[i] = rate[i] * 0.10;
    printf("\t %d", dis[i]);

    ratead[i] = rate[i] - dis[i];
    printf("\t %d", ratead[i]);

    gst[i] = ratead[i] * 0.18;
    printf("\t %d", gst[i]);

    billamt[i] = ratead[i] + gst[i];
    printf("\t %d", billamt[i]);
  }

  printf("\n\n total is:-");
  for (i = 0; i < 5; i++) {
    a = a + dis[i];
  }
  printf("\t \t \t\t %d", a);
  for (i = 0; i < 5; i++) {
    b = b + gst[i];
  }
  printf("\t\t %d",b);
  for(i=0;i<5;i++)
{
  c=c+billamt[i];
}
printf("\t %d",c);
return 0;
}