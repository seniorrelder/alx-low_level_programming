#include <stdlib.h>
#include <string.h> /* Include this header for memset function */

void *_calloc(unsigned int nmemb, unsigned int size) {
    void *ptr;
    unsigned int total_size;

    /* Return NULL if nmemb or size is 0 */
    if (nmemb == 0 || size == 0) return NULL;

    /* Calculate total size of memory to be allocated */
    total_size = nmemb * size;

    /* Allocate memory using malloc */
    ptr = malloc(total_size);
    if (ptr == NULL) return NULL; /* Return NULL if malloc fails */

    /* Initialize allocated memory to zero */
    memset(ptr, 0, total_size);

    return ptr;
}
