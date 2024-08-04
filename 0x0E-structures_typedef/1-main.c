#include "dog.h"
#include <stdio.h>

int main() {
    dog my_dog;
    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("Name: %s, Age: %.1f, Owner: %s\n", my_dog.name, my_dog.age, my_dog.owner);
    return 0;
}
