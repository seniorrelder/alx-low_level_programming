#include <stdlib.h>

char *str_concat(char *s1, char *s2) {
    char *concat_str;
    int i, j, len1 = 0, len2 = 0;

    /* Treat NULL as empty strings */
    if (s1 == NULL) s1 = "";
    if (s2 == NULL) s2 = "";

    /* Calculate lengths of s1 and s2 */
    while (s1[len1]) len1++;
    while (s2[len2]) len2++;

    /* Allocate memory for the concatenated string */
    concat_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (concat_str == NULL) return NULL;

    /* Copy s1 into concat_str */
    for (i = 0; s1[i] != '\0'; i++) {
        concat_str[i] = s1[i];
    }

    /* Concatenate s2 to concat_str */
    for (j = 0; s2[j] != '\0'; j++) {
        concat_str[i + j] = s2[j];
    }

    /* Null terminate concat_str */
    concat_str[i + j] = '\0';

    return concat_str;
}
