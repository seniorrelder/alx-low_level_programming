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
 * print_last_digit - prints the last digit of a number
 * @n: the number to process
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit = n % 10;
    if (last_digit < 0)
    {
        last_digit = -last_digit;
    }
    _putchar(last_digit + '0');
    return last_digit;
}
