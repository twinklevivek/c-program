#include <stdio.h>

int main() {
    int a[10],total=0;
    int i;
    int even_sum = 0, odd_sum = 0;
{
  printf("entar a[%d]:",i+1 );
  scanf("%d",&a[i]);
}

    for (int i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {
            even_sum += a[i];
        }
        else {
            odd_sum += a[i];
        }
    }

    printf("Sum of even elements: %d\n", even_sum);
    printf("Sum of odd elements: %d\n", odd_sum);
return 0;
}