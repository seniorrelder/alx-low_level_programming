#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
    void *new_ptr;
    unsigned int i, copy_size;

    /* If new_size is the same as old_size, return the original pointer */
    if (new_size == old_size) return ptr;

    /* If new_size is 0 and ptr is not NULL, free ptr and return NULL */
    if (new_size == 0 && ptr != NULL) {
        free(ptr);
        return NULL;
    }

    /* If ptr is NULL, the call is equivalent to malloc(new_size) */
    if (ptr == NULL) {
        return malloc(new_size);
    }

    /* Allocate memory for the new block */
    new_ptr = malloc(new_size);
    if (new_ptr == NULL) return NULL; /* If malloc fails, return NULL */

    /* Calculate the size to copy */
    copy_size = (old_size < new_size) ? old_size : new_size;

    /* Copy the data from the old block to the new block */
    for (i = 0; i < copy_size; i++) {
        ((char *)new_ptr)[i] = ((char *)ptr)[i];
    }

    /* Free the old block */
    free(ptr);

    return new_ptr;
}
