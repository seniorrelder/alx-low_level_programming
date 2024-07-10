#include <stdio.h>

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 * 
 * Return: The value of x^y. If y is lower than 0, returns -1.
 */
int _pow_recursion(int x, int y)
{
    if (y < 0) /* If y is less than 0, return -1 */
    {
        return -1;
    }
    else if (y == 0) /* The base case: any number to the power of 0 is 1 */
    {
        return 1;
    }
    else
    {
        return x * _pow_recursion(x, y - 1); /* Recursive step */
    }
}
