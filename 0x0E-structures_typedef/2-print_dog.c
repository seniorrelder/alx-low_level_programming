#include "dog.h"
#include <stdio.h>
#include <stddef.h> /* For NULL */

void print_dog(dog *d) {
    if (d == NULL) {
        return; /* If d is NULL, do nothing */
    }

    /* Print name, checking for NULL */
    printf("Name: ");
    if (d->name == NULL) {
        printf("(nil)\n");
    } else {
        printf("%s\n", d->name);
    }

    /* Print age */
    printf("Age: %f\n", d->age);

    /* Print owner, checking for NULL */
    printf("Owner: ");
    if (d->owner == NULL) {
        printf("(nil)\n");
    } else {
        printf("%s\n", d->owner);
    }
}
