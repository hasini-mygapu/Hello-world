#include <stdio.h>

// Function to calculate growth rate
float calculateGrowthRate(float initialPop, float finalPop, float time) {
    if (time <= 0) {
        printf("Time must be greater than zero.\n");
        return -1;
    }

    return (finalPop - initialPop) / time;
}

int main() {
    float initialPopulation, finalPopulation, time, growthRate;

    // Input values
    printf("Enter initial population: ");
    scanf("%f", &initialPopulation);

    printf("Enter final population: ");
    scanf("%f", &finalPopulation);

    printf("Enter time period: ");
    scanf("%f", &time);

    // Function call
    growthRate = calculateGrowthRate(initialPopulation, finalPopulation, time);

    // Display result
    if (growthRate != -1) {
        printf("Growth Rate = %.2f bacteria per unit time\n", growthRate);
    }

    return 0;
}
OUTPUT
Enter initial population: 800
Enter final population: 7800
Enter time period: 90
Growth Rate = 77.78 bacteria per unit time


=== Code Execution Successful ===
