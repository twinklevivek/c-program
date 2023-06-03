#include <stdio.h>

int main() {
    int math, sci, eng;
    int total, grad, fail;

    // Assuming you have input values for math, science, and engineering grades
   printf("enter math marks:");
    scanf("%d",&math);
    printf("enter sci marks:");
    scanf("%d",&sci);
    printf("enter eng marks:");
    scanf("%d",&eng);

    // Calculate total marks
    total = math + sci + eng;

    // Check if the student passed or failed
    if (math >= 40 && sci >= 40 && eng >= 40) {
        grad = 1;  // Student passed
    } else {
        grad = 0;  // Student failed
    }

    // Calculate the fail count
    fail = 3 - grad;

    // Print the results
    printf("Total marks: %d\n", total);
    if (grad) {
        printf("Result: Pass\n");
    } else {
        printf("Result: Fail\n");
    }
    printf("Number of subjects failed: %d\n", fail);

    return 0;
}
