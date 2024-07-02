#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, generates a random password.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int length = 12; // Desired password length
    srand(time(NULL)); // Initialize random seed

    printf("Random Password: ");
    for (int i = 0; i < length; i++)
    {
        // Generate a random printable character
        char randChar = (rand() % (126 - 33 + 1)) + 33; // Printable chars range from 33 to 126
        printf("%c", randChar);
    }
    printf("\n");

    return 0;
}
