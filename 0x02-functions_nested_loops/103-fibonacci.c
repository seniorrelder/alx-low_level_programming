#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
    long int sum = 0;
    long int t1 = 1, t2 = 2, nextTerm = t1 + t2;

    // t2 is the first even-valued term
    sum += t2;

    while (nextTerm <= 4000000)
    {
        if (nextTerm % 2 == 0)
        {
            sum += nextTerm;
        }
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    printf("%ld\n", sum);
    return 0;
}
