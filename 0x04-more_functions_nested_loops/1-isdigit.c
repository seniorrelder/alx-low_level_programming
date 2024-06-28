#include "main.h"
#include <stdio.h>

/**
 * main - Checks the _isdigit function
 *
 * Return: Always 0
 */
int main(void)
{
    char c;

    c = '5';
    printf("%c: %d\n", c, _isdigit(c));

    c = 'A';
    printf("%c: %d\n", c, _isdigit(c));

    return (0);
}

