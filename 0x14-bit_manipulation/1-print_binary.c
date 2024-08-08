#include "_putchar.h"

void print_binary(unsigned long int n) {
    unsigned long int mask;
    int started;

    if (n == 0) {
        _putchar('0');
        return;
    }

    mask = 1UL << (sizeof(n) * 8 - 1);
    started = 0;

    while (mask > 0) {
        if (n & mask) {
            _putchar('1');
            started = 1;
        } else if (started) {
            _putchar('0');
        }
        mask >>= 1;
    }
}
