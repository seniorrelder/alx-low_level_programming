#include <stdio.h>

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @s: The string to modify.
 *
 * Return: Pointer to the modified string @s.
 */
char *cap_string(char *s)
{
    int i = 0;
    int capitalize = 1; /* Flag to indicate if we should capitalize the next letter */

    /* List of separators */
    char separators[] = " \t\n,;.!?\"(){}";

    /* Variable declarations moved outside of the for loop */
    int j;

    while (s[i] != '\0')
    {
        /* Check if the current character is a separator */
        int is_separator = 0;
        for (j = 0; separators[j] != '\0'; j++)
        {
            if (s[i] == separators[j])
            {
                is_separator = 1;
                break;
            }
        }

        /* If it's a separator, set flag to capitalize the next letter */
        if (is_separator)
        {
            capitalize = 1;
        }
        /* If it's a letter and the flag is set, capitalize it */
        else if (capitalize && (s[i] >= 'a' && s[i] <= 'z'))
        {
            s[i] -= ('a' - 'A');
            capitalize = 0; /* Reset flag */
        }
        /* If it's a letter but not the first of a word, ensure flag is reset */
        else if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            capitalize = 0;
        }

        i++;
    }

    return s;
}

