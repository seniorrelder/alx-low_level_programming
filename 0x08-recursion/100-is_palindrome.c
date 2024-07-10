#include <stdio.h>
#include <string.h>

/**
 * check_palindrome - Helper function to check if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the string.
 * @end: The ending index of the string.
 * 
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
    if (start >= end) /* Base case: If the start index is greater than or equal to the end index */
        return 1; /* The string is a palindrome */
    if (s[start] != s[end]) /* If the characters at the start and end do not match */
        return 0; /* The string is not a palindrome */
    /* Recursive call to check the next pair of characters */
    return check_palindrome(s, start + 1, end - 1);
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 * @s: The string to check.
 * 
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int length = strlen(s); /* Get the length of the string */
    if (length == 0) /* An empty string is considered a palindrome */
        return 1;
    /* Call the helper function with the initial indices */
    return check_palindrome(s, 0, length - 1);
}
