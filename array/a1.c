#include <stdio.h>

int main() {
    int a[5], b[5];
    int i;

    // Taking input for array 'a'
    for(i = 0; i < 5; i++) {
        printf("\nEnter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Taking input for array 'b'
    for(i = 0; i < 5; i++) {
        printf("\nEnter b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    // Printing array 'a'
    printf("\n---Array a---\n");
    for(i = 0; i < 5; i++) {
        printf("a[%d]: %d\n", i, a[i]);
    }

    // Printing array 'b'
    printf("\n---Array b---\n");
    for(i = 0; i < 5; i++) {
        printf("b[%d]: %d\n", i, b[i]);
    }

    // Printing both arrays side by side
    printf("\n---Arrays---\n");
    printf("(A)\t(B)\n");
    for(i = 0; i < 5; i++) {
        printf("%d\t%d\n", a[i], b[i]);
}
return 0;
}