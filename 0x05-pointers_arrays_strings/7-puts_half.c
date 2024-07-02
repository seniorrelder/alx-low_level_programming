#include <stdio.h>

void puts_half(char *str) {
    int length = 0, n, i;

    /* Calculate the length of the string */
    while (str[length] != '\0') {
        length++;
    }

    /* Determine starting index for printing */
    if (length % 2 == 0) {
        n = length / 2;
    } else {
        n = (length - 1) / 2;
        n += 1; /* Adjust to print the last n characters */
    }

    /* Print the second half of the string */
    for (i = n; i < length; i++) {
        putchar(str[i]);
    }

    /* Print a new line at the end */
    putchar('\n');
}
