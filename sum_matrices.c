#include <stdio.h>
int main()
{
    int A[5][5], B[5][5], Sum[5][5];
    int i, j;
    // Input first matrix
    printf("Enter elements of first 5x5 matrix:\n");
    for(i = 0; i < 5; i++)
      {
        for(j = 0; j < 5; j++)
          {
            scanf("%d", &A[i][j]);
        }
    }
    // Input second matrix
    printf("Enter elements of second 5x5 matrix:\n");
    for(i = 0; i < 5; i++)
      {
        for(j = 0; j < 5; j++)
          {
            scanf("%d", &B[i][j]);
        }
    }
    // Calculate sum of matrices
    for(i = 0; i < 5; i++)
      {
        for(j = 0; j < 5; j++)
          {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }
    // Display result
    printf("Sum of the two matrices:\n");
    for(i = 0; i < 5; i++)
      {
        for(j = 0; j < 5; j++)
          {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
OUTPUT
Sum of the two matrices:
2 4 6 8 10
12 14 16 18 20
22 24 26 28 30
32 34 36 38 40
42 44 46 48 50
