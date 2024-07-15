#include <stdlib.h>

/* Prototype: char *argstostr(int ac, char **av); */
/* Returns NULL if ac == 0 or av == NULL */
/* Returns a pointer to a new string, or NULL if it fails */
/* Each argument should be followed by a \n in the new string */
char *argstostr(int ac, char **av) {
    char *str;
    int i, j, len = 0, pos = 0;

    /* Check for valid input */
    if (ac == 0 || av == NULL) return NULL;

    /* Calculate total length needed */
    for (i = 0; i < ac; i++) {
        for (j = 0; av[i][j] != '\0'; j++, len++);
        len++; /* For the newline after each argument */
    }

    /* Allocate memory for the concatenated string, including null terminator */
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == NULL) return NULL;

    /* Concatenate arguments */
    for (i = 0; i < ac; i++) {
        for (j = 0; av[i][j] != '\0'; j++) {
            str[pos++] = av[i][j];
        }
        str[pos++] = '\n'; /* Add newline after each argument */
    }

    str[pos] = '\0'; /* Null terminate the string */
    return str;
}
