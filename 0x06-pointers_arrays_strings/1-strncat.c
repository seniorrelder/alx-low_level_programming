#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
    char *temp = dest;

    /* Move to the end of dest */
    while (*dest)
    {
        dest++;
    }

    /* Copy at most n bytes from src */
    while (n-- && *src)
    {
        *dest++ = *src++;
    }

    /* Ensure the result is null-terminated */
    *dest = '\0';

    return temp;
}
