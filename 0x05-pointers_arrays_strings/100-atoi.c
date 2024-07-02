#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to be converted.
 *
 * Description: Converts a string to an integer considering all the
 * '-' and '+' signs before the number. If there are no numbers in the
 * string, the function returns 0. Does not use long, arrays, or
 * hard-coded special values. Assumes _putchar is available for output.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
    int result = 0; /* To store the converted number */
    int sign = 1;   /* Assume positive sign initially */

    /* Skip non-numeric characters and determine sign */
    while (*s != '\0')
    {
        if (*s == '-')
        {
            sign *= -1; /* Flip the sign */
        }
        else if (*s >= '0' && *s <= '9')
        {
            break; /* Found the beginning of a number */
        }
        s++;
    }

    /* Convert numeric characters to integer */
    while (*s >= '0' && *s <= '9')
    {
        result = result * 10 + (*s - '0');
        s++;
    }

    /* Apply the sign */
    result *= sign;

    return result;
}
