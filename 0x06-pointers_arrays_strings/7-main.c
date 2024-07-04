#include "main.h"
#include <stdio.h>

/**
 * leet - Converts a string to 1337 (leet) speak.
 * @s: The string to convert.
 *
 * Return: Pointer to the modified string @s.
 */
char *leet(char *s)
{
    int i = 0;
    char leet_map[] = "aAeEoOtTlL";
    char leet_replace[] = "4433007711";

    while (s[i] != '\0')
    {
        for (int j = 0; leet_map[j] != '\0'; j++)
        {
            if (s[i] == leet_map[j])
            {
                s[i] = leet_replace[j];
                break; /* Move to the next character in the string */
            }
        }
        i++;
    }

    return s;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);

    return (0);
}

