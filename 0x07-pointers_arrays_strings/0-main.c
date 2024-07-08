#include "main.h"
#include <stdio.h>

/*
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/* Main function to test _memset */
int main(void) {
    char buffer[64];

    _memset(buffer, 'x', sizeof(buffer));
    simple_print_buffer(buffer, sizeof(buffer));

    return 0;
}
