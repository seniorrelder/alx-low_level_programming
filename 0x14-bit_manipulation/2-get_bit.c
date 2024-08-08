#include <stdio.h>
#include "get_bit.h"

int main(void) {
    unsigned long int n = 98;
    unsigned int index = 1;

    int bit = get_bit(n, index);
    printf("The bit at index %u is: %d\n", index, bit);

    return 0;
}
