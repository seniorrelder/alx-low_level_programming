#include <stdio.h>

/*
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to the first integer to be swapped.
 * @b: A pointer to the second integer to be swapped.
 */
void swap_int(int *a, int *b) {
    int temp = *a; /* Temporarily store the value of *a */
    *a = *b; /* Assign the value of *b to *a */
    *b = temp; /* Assign the stored value of *a (temp) to *b */
}
