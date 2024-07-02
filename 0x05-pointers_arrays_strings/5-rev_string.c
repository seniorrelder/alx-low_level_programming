#include <stdio.h>

void rev_string(char *s) {
    int len = 0, index = 0;
    char temp;

    // Calculate the length of the string
    while (s[len] != '\0') {
        len++;
    }

    // Reverse the string
    for (index = 0; index < len / 2; index++) {
        temp = s[index];
        s[index] = s[len - index - 1];
        s[len - index - 1] = temp;
    }
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void) {
    char s[11] = "Holberton!";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
