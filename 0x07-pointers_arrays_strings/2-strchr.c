#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched
 * @c: The character to find
 *
 * Description: This function locates the first occurrence of the character c
 * in the string s. If the character is found, a pointer to the character in s
 * is returned. If the character is not found, NULL is returned.
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c) {
    while (*s != '\0') { /* Loop through the string */
        if (*s == c) {
            return s; /* Return the address where c is found */
        }
        s++;
    }
    if (c == '\0') { /* If c is '\0', return the address of the null terminator */
        return s;
    }
    return NULL; /* If c was not found in the string, return NULL */
}
