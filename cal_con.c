#include <stdio.h>

int main() {
    int n, i;
    float m, v, c;

    // Ask user for number of samples
    printf("Enter number of samples: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("\nSample %d\n", i);
        // Input mass
        printf("Enter mass (m): ");
        scanf("%f", &m);
        // Input volume
        printf("Enter volume (v): ");
        scanf("%f", &v);
        // Check to avoid division by zero
        if(v == 0) {
            printf("Volume cannot be zero. Skipping this sample.\n");
            continue;
        }
        // Calculate concentration
        c = m / v;
        // Output result
        printf("Concentration (c = m/v) = %.2f\n", c);
    }
    return 0;
}
OUTPUT
Enter number of samples: 5

Sample 1
Enter mass (m): 90
Enter volume (v): 9
Concentration (c = m/v) = 10.00

Sample 2
Enter mass (m): 80
Enter volume (v): 0
Volume cannot be zero. Skipping this sample.

Sample 3
Enter mass (m): 75
Enter volume (v): 80
Concentration (c = m/v) = 0.94

Sample 4
Enter mass (m): 0
Enter volume (v): 87
Concentration (c = m/v) = 0.00

Sample 5
Enter mass (m): 
86
Enter volume (v): 0
Volume cannot be zero. Skipping this sample.


=== Code Execution Successful ===
