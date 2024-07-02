#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: The string from which characters are printed.
 */
void puts2(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (i % 2 == 0) /* Check if the index is even */
        {
            putchar(str[i]); /* Print the character at the even index */
        }
        i++;
    }
    putchar('\n'); /* Print a new line after the string */
}
