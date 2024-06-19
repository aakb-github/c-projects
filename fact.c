#include <stdio.h>

void fact() {
    int num, i;
    unsigned long long factorial = 1;

    // Asking for user input
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the input is a valid non-negative integer
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial using a loop
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Print the result
        printf("Factorial of %d = %llu\n", num, factorial);
    }

//    return 0;
}

