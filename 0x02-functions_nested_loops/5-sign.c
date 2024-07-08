#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_sign - prints the sign of a number
 * @n: the number of which the sign will be printed
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return 1;
    }
    else if (n == 0)
    {
        _putchar('0');
        return 0;
    }
    else
    {
        _putchar('-');
        return -1;
    }
}
