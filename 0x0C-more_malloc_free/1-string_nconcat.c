#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n) {
    char *new_str;
    unsigned int len1 = 0, len2 = 0, i, total_len;

    /* Treat NULL inputs as empty strings */
    if (s1 == NULL) s1 = "";
    if (s2 == NULL) s2 = "";

    /* Calculate lengths of s1 and s2 */
    while (s1[len1]) len1++;
    while (s2[len2]) len2++;

    /* If n is greater than or equal to the length of s2, use the entire s2 */
    if (n >= len2) n = len2;

    /* Calculate total length of new string (+1 for null terminator) */
    total_len = len1 + n + 1;

    /* Allocate memory for the new string */
    new_str = (char *)malloc(total_len * sizeof(char));
    if (new_str == NULL) return NULL;

    /* Copy s1 to new_str */
    for (i = 0; i < len1; i++) {
        new_str[i] = s1[i];
    }

    /* Concatenate first n bytes of s2 to new_str */
    for (i = 0; i < n; i++) {
        new_str[len1 + i] = s2[i];
    }

    /* Null terminate new_str */
    new_str[len1 + n] = '\0';

    return new_str;
}
