#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i = strlen(n1) - 1, j = strlen(n2) - 1, k = size_r - 1, carry = 0, sum;

    r[k--] = '\0'; /* Null-terminate the result string */

    while (i >= 0 || j >= 0 || carry)
    {
        if (k < 1) /* Check if there's space for at least one digit and the null terminator */
            return 0;

        sum = carry + (i >= 0 ? n1[i--] - '0' : 0) + (j >= 0 ? n2[j--] - '0' : 0);
        carry = sum / 10;
        r[k--] = (sum % 10) + '0';
    }

    if (k != size_r - 2) /* If we used less than the available space, shift the result to the beginning */
        memmove(r, r + k + 1, size_r - k - 1);

    return r;
}
