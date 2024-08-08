#include <limits.h>

int clear_bit(unsigned long int *n, unsigned int index) {
    unsigned long int mask;

    if (index >= sizeof(unsigned long int) * CHAR_BIT) {
        return -1;
    }

    mask = 1UL << index;
    *n &= ~mask;

    return 1;
}
