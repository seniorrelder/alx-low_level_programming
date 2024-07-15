#include <stdlib.h>

/* Function to count the number of words in a string */
static int word_count(char *str) {
    int count = 0;
    while (*str) {
        /* Skip any spaces */
        while (*str == ' ' && *str != '\0') str++;
        /* If next character is not the end of string and not a space, it's the start of a word */
        if (*str != '\0' && *str != ' ') count++;
        /* Skip non-space characters */
        while (*str != ' ' && *str != '\0') str++;
    }
    return count;
}

/* Function to copy a word from source to destination */
static char *copy_word(char *src) {
    char *word, *dest;
    int len = 0;

    /* Calculate word length */
    while (src[len] != ' ' && src[len] != '\0') len++;

    /* Allocate memory for the word, including null terminator */
    word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word) return NULL;

    /* Copy the word */
    dest = word;
    while (len--) *dest++ = *src++;
    *dest = '\0'; /* Null-terminate the word */

    return word;
}

/* Prototype: char **strtow(char *str); */
char **strtow(char *str) {
    char **words, *word;
    int i = 0, wc;

    if (!str || !*str) return NULL; /* Check for empty string */

    wc = word_count(str); /* Count words */
    if (wc == 0) return NULL; /* No words found */

    /* Allocate memory for pointers to words, including NULL terminator */
    words = (char **)malloc(sizeof(char *) * (wc + 1));
    if (!words) return NULL;

    while (*str) {
        /* Skip spaces */
        while (*str == ' ' && *str != '\0') str++;
        if (*str == '\0') break; /* End of string */

        /* Copy next word */
        word = copy_word(str);
        if (!word) {
            /* Free allocated memory in case of failure */
            while (i--) free(words[i]);
            free(words);
            return NULL;
        }
        words[i++] = word;

        /* Skip the word */
        while (*str != ' ' && *str != '\0') str++;
    }
    words[i] = NULL; /* Null-terminate the array of words */

    return words;
}
