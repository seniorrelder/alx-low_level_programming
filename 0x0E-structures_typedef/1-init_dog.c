#include <stddef.h>
#include "dog.h"

void init_dog(dog *d, char *name, float age, char *owner) {
    if (d != NULL) {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}

