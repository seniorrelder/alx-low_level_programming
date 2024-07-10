#include <stdio.h>

/**
 * helper_function - A helper function to find the natural square root.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 * 
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int helper_function(int n, int guess)
{
    if (guess * guess == n) /* If guess is the square root of n */
    {
        return guess;
    }
    else if (guess * guess > n) /* If guess squared is greater than n, n does not have a natural square root */
    {
        return -1;
    }
    else
    {
        return helper_function(n, guess + 1); /* Increment guess and try again */
    }
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 * 
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
    return helper_function(n, 1); /* Start the guess with 1 */
}
