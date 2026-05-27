#include <stdio.h>

int main()
{
    char dna[] = "ATGCGGATCGCGTAACG";
    int i = 0;
    int gCount = 0, cCount = 0;
    // Count frequency of G and C
    while (dna[i] != '\0')
      {
        if (dna[i] == 'G' || dna[i] == 'g')
        {
            gCount++;
        }
        if (dna[i] == 'C' || dna[i] == 'c') {
            cCount++;
        }
        i++;
      }
    // Display results
    printf("DNA Sequence: %s\n", dna);
    printf("Frequency of G bases: %d\n", gCount);
    printf("Frequency of C bases: %d\n", cCount);

    return 0;
}
OUTPUT
DNA Sequence: ATGCGGATCGCGTAACG
Frequency of G bases: 6
Frequency of C bases: 4
