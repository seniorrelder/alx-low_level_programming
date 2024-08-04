#include "dog.h"
#include <stdlib.h>

void free_dog(dog_t *d) {
    if (d != NULL) {
        free(d->name); /* Free the name */
        free(d->owner); /* Free the owner */
        free(d); /* Finally, free the struct itself */
    }
}
