#include <stdio.h>

/* Prototype for helper function */
void _putchar(char c);

void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        /* Convert n to positive if it's negative */
        n = -n;
    }
    if (n / 10)
        print_number(n / 10); /* Recursive call to print digits */
    _putchar(n % 10 + '0'); /* Print last digit */
}
