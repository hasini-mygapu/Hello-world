#include <stdio.h>

// Define structure
struct Patient {
    int id;
    char bloodGroup[5];
    float temperature;
};

int main() {
    struct Patient p;
    
    // Input patient details
    printf("Enter Patient ID: ");
    scanf("%d", &p.id);
    printf("Enter Blood Group: ");
    scanf("%s", p.bloodGroup);
    printf("Enter Temperature: ");
    scanf("%f", &p.temperature);
    // Check for fever
    if (p.temperature > 98.6) {
        printf("\nPatient has fever.\n");
        printf("Patient ID: %d\n", p.id);
        printf("Blood Group: %s\n", p.bloodGroup);
        printf("Temperature: %.1f\n", p.temperature);
    } else {
        printf("\nPatient does not have fever.\n");
    }

    return 0;
}
OUTPUT
Enter Patient ID: 201
Enter Blood Group: O+
Enter Temperature: 101.2

Patient has fever.
Patient ID: 201
Blood Group: O+
Temperature: 101.2
