#include <stdio.h>

void big3() {
    int n, i;
    float num, max;

    // Asking for the count of numbers
    printf("\nEnter the count of numbers: ");
    scanf("%d", &n);

    // Check if the count of numbers is positive
    if (n <= 0) {
        printf("Please enter a positive number of counts.\n");
        return 1;
    }

    // Asking for the first number
    printf("Enter number 1: ");
    scanf("%f", &num);

    // Initialize max with the first number
    max = num;

    // Loop to read the remaining numbers
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);

        // Update max if the current number is larger
        if (num > max) {
            max = num;
        }
    }

    // Output the largest number
    printf("The largest number is: %.2f\n", max);

//    return 0;
}

