#include <stdlib.h>

int *array_range(int min, int max) {
    int *array, i, size;

    /* Return NULL if min > max */
    if (min > max) return NULL;

    /* Calculate the size of the array */
    size = max - min + 1;

    /* Allocate memory for the array */
    array = (int *)malloc(size * sizeof(int));
    if (array == NULL) return NULL; /* Return NULL if malloc fails */

    /* Fill the array with values from min to max */
    for (i = 0; i < size; i++) {
        array[i] = min + i;
    }

    return array;
}
