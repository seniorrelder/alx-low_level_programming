#include <stdio.h>

char *_strcpy(char *dest, char *src) {
    char *start = dest;

    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
    return start;
}
