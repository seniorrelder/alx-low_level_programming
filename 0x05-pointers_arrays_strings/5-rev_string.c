/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
    int i, length;
    char temp;

    /* First, find the length of the string */
    for (length = 0; s[length] != '\0'; length++)
        ;

    /* Then, swap characters from the start of the string with those at the end */
    for (i = 0; i < length / 2; i++)
    {
        temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
}
