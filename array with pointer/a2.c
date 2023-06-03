#include <stdio.h>

void printSequence(int n) {
    int term = 1;

    for (int i = 1; i <= n; i++) {
        printf("%d ", term);
        term = 3 * term + 1;
    }
}

int main() {
    int num;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printSequence(num);

    return 0;
}
