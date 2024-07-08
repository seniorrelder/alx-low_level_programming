#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
    long number = 612852475143;
    long divisor = 2;
    long largestPrime = 0;

    while (number != 1)
    {
        if (number % divisor == 0)
        {
            number = number / divisor;
            largestPrime = divisor;
        }
        else
        {
            divisor++;
        }
    }

    printf("%ld\n", largestPrime);

    return 0;
}
