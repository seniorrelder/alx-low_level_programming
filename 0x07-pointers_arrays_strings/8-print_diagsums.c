#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the start of the matrix
 * @size: The size of the matrix (number of rows/columns)
 *
 * Description: This function calculates and prints the sum of the two diagonals
 * of a square matrix of integers.
 */
void print_diagsums(int *a, int size) {
    int i;
    unsigned int sum1 = 0, sum2 = 0;

    /* Loop through each element of the matrix */
    for (i = 0; i < size; i++) {
        /* Sum of the primary diagonal */
        sum1 += a[(size + 1) * i];
        /* Sum of the secondary diagonal */
        sum2 += a[(size - 1) * (i + 1)];
    }

    /* Print the sums of the two diagonals */
    printf("%d, %d\n", sum1, sum2);
}
