#include "main.h"

int _putchar(char c); /* Prototype for the _putchar function */

void print_numbers(void) {
    int num;
    for (num = 0; num <= 9; num++) {
        _putchar(num + '0');
    }
    _putchar('\n');
}
