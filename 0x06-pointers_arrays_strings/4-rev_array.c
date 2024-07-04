#include <stdio.h>

/**
 * reverse_array - Reverses an array of integers.
 * @a: The array of integers to reverse.
 * @n: The number of elements in the array.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
    int temp, i, j;

    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

