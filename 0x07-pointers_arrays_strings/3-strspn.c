#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The main string to be scanned
 * @accept: The string containing the list of characters to match in s
 *
 * Description: This function calculates the length of the initial segment of s
 * which consists only of characters that are part of accept.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    char *start = accept;

    while (*s && *accept) {
        if (*s == *accept) {
            count++;
            s++;
            accept = start;  /* Reset accept to start to check next char in s */
        } else {
            accept++;
            if (*accept == '\0') {
                s++;
                accept = start;  /* Reset accept to start for new char in s */
                if (count == 0 || *(s - 1) != *(s - 2)) {
                    break;  /* Break if no match found or chars in s change */
                }
            }
        }
    }
    return count;
}
