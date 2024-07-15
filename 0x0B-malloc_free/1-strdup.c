#include <stdlib.h>

char *_strdup(char *str) {
    char *dup;
    unsigned int len = 0, i;

    if (str == NULL) return NULL;

    /* Calculate the length of str */
    while (str[len]) len++;

    /* Allocate memory for the duplicate, including space for null terminator */
    dup = (char *)malloc((len + 1) * sizeof(char));
    if (dup == NULL) return NULL;

    /* Copy the characters */
    for (i = 0; i <= len; i++) {
        dup[i] = str[i];
    }

    return dup;
}
