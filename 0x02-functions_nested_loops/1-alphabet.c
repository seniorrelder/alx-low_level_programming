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
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
    char letter;
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        _putchar(letter);
    }
    _putchar('\n');
}
