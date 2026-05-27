/*to find the factoral of  non negative integer*/
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    // Input from user
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Display result
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
OUTPUT
Enter a non-negative integer:5
  Factorial of 5=120
