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
 * print_times_table - prints the n times table, starting with 0
 * @n: the times table to print
 */
void print_times_table(int n)
{
    int row, col, product;
    if (n >= 0 && n <= 15)
    {
        for (row = 0; row <= n; row++)
        {
            for (col = 0; col <= n; col++)
            {
                product = row * col;
                if (col == 0)
                {
                    _putchar('0' + product);
                }
                else
                {
                    _putchar(',');
                    _putchar(' ');
                    if (product < 10)
                    {
                        _putchar(' ');
                        _putchar(' ');
                        _putchar('0' + product);
                    }
                    else if (product < 100)
                    {
                        _putchar(' ');
                        _putchar('0' + product / 10);
                        _putchar('0' + product % 10);
                    }
                    else
                    {
                        _putchar('0' + product / 100);
                        _putchar('0' + (product / 10) % 10);
                        _putchar('0' + product % 10);
                    }
                }
            }
            _putchar('\n');
        }
    }
}
