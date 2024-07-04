#include <stdio.h>

/**
 * _strncpy - Copies at most n characters from src to dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    /* Copy src to dest */
    for (; src[i] != '\0' && i < n; i++)
    {
        dest[i] = src[i];
    }

    /* If length of src is less than n, write additional null bytes to dest */
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}

