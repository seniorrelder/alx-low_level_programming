#include <stdio.h>

/**
 * check_prime - Helper function to check if a number is prime.
 * @n: The number to check.
 * @i: The current divisor to check.
 * 
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int check_prime(int n, int i)
{
    if (n <= 2)
        return (n == 2) ? 1 : 0; /* If n is 2, it's prime. If less, it's not. */
    if (n % i == 0)
        return 0; /* If n is divisible by any number other than 1 and itself, it's not prime. */
    if (i * i > n)
        return 1; /* If i squared is greater than n, no need to check further. */

    return check_prime(n, i + 1); /* Check next divisor */
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number, otherwise return 0.
 * @n: The number to check.
 * 
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
    return check_prime(n, 2); /* Start checking from 2 */
}
