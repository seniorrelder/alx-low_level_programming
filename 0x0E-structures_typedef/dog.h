#ifndef DOG_H
#define DOG_H

#include <stddef.h> /* For NULL */

typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t; /* New type name for struct dog */

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d); /* Use dog_t here */

#endif /* DOG_H*/
