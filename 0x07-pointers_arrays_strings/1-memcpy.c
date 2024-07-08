#include <stdio.h>

/**
 * _memcpy - Copies memory area
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy
 *
 * Description: This function copies n bytes from memory area src
 * to memory area dest. The memory areas must not overlap.
 * Use memmove() if the memory areas do overlap.
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n) {
    unsigned int i;
    for (i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    return dest;
}
