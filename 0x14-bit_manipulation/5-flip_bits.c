#include <stdio.h>

unsigned int flip_bits(unsigned long int n, unsigned long int m);

int main(void) {
    unsigned long int n = 29;
    unsigned long int m = 15;

    unsigned int result = flip_bits(n, m);
    printf("Number of bits to flip to get from %lu to %lu: %u\n", n, m, result);

    return 0;
}
