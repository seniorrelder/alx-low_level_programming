#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to find in haystack
 *
 * Description: Finds the first occurrence of the substring needle in the
 * string haystack. The terminating null bytes (\0) are not compared.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle) {
    char *h_ptr, *n_ptr;

    /* If needle is empty, return haystack */
    if (*needle == '\0') {
        return haystack;
    }

    while (*haystack != '\0') {
        h_ptr = haystack;
        n_ptr = needle;

        /* While haystack matches needle and needle is not at its end */
        while (*n_ptr != '\0' && *h_ptr == *n_ptr) {
            h_ptr++;
            n_ptr++;
        }

        /* If the end of needle is reached, substring found */
        if (*n_ptr == '\0') {
            return haystack;
        }

        haystack++;
    }

    /* Substring not found */
    return NULL;
}
