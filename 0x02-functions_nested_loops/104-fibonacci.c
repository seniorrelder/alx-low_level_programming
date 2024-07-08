#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
    int count = 98;
    unsigned long a = 0, b = 1, next = 0;
    for (int i = 1; i <= count; i++)
    {
        next = a + b;
        printf("%lu", next);
        if (i != count)
        {
            printf(", ");
        }
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
