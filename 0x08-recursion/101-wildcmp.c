#include <stdio.h>

/**
 * wildcmp - Compares two strings and returns 1 if the strings can be considered identical, otherwise returns 0.
 * @s1: The first string.
 * @s2: The second string, which can contain the special character '*'.
 * 
 * Description: The special character '*' in s2 can replace any string (including an empty string).
 * 
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0') /* If both strings end at the same time */
        return 1;
    if (*s1 == *s2) /* If the current characters of both strings match */
        return wildcmp(s1 + 1, s2 + 1);
    if (*s2 == '*') /* If the current character of s2 is '*', check for all possibilities */
    {
        if (*(s2 + 1) == '\0' || wildcmp(s1, s2 + 1)) /* If '*' is the last character in s2 or the rest of the strings match */
            return 1;
        if (*s1 && wildcmp(s1 + 1, s2)) /* If s1 is not at the end, check the next character */
            return 1;
    }
    return 0; /* If none of the above conditions are met, the strings are not identical */
}
