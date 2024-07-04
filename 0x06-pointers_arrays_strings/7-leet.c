#include <stdio.h>

/**
 * leet - Converts a string to 1337 (leet) speak.
 * @s: The string to convert.
 *
 * Return: Pointer to the modified string @s.
 */
char *leet(char *s)
{
    int i, j;
    char letters[] = "aAeEoOtTlL";
    char numbers[] = "4433007711";

    /* Loop through each character in the string */
    for (i = 0; s[i] != '\0'; i++)
    {
        /* Check if the current character matches any character in letters */
        for (j = 0; letters[j] != '\0'; j++)
        {
            if (s[i] == letters[j])
            {
                s[i] = numbers[j]; /* Replace with corresponding number */
                break; /* Move to the next character in the string */
            }
        }
    }

    return s;
}

