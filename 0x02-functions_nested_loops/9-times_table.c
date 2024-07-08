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
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
    int row, col, product;
    for (row = 0; row <= 9; row++)
    {
        for (col = 0; col <= 9; col++)
        {
            product = row * col;
            if (col == 0)
            {
                _putchar('0' + product);
            }
            else if (product < 10)
            {
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                _putchar('0' + product);
            }
            else
            {
                _putchar(',');
                _putchar(' ');
                _putchar('0' + product / 10);
                _putchar('0' + product % 10);
            }
        }
        _putchar('\n');
    }
}
