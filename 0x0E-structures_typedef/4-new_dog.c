#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *newdog = malloc(sizeof(dog_t));
    if (newdog == NULL) {
        return NULL; /* Memory allocation failed */
    }

    /* Allocate memory and copy the name */
    newdog->name = malloc(strlen(name) + 1);
    if (newdog->name == NULL) {
        free(newdog); /* Clean up previously allocated memory */
        return NULL;
    }
    strcpy(newdog->name, name);

    /* Allocate memory and copy the owner */
    newdog->owner = malloc(strlen(owner) + 1);
    if (newdog->owner == NULL) {
        free(newdog->name); /* Clean up previously allocated memory */
        free(newdog);
        return NULL;
    }
    strcpy(newdog->owner, owner);

    newdog->age = age;

    return newdog;
}
