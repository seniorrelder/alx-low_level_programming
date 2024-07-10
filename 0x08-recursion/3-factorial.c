#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial of.
 * 
 * Return: The factorial of n. If n is lower than 0, returns -1 to indicate an error.
 */
int factorial(int n)
{
    if (n < 0) /* If n is less than 0, return -1 to indicate an error */
    {
        return -1;
    }
    else if (n == 0) /* The factorial of 0 is 1 */
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1); /* Recursive step: n! = n * (n-1)! */
    }
}
