char *_strncpy(char *dest, char *src, int n)
{
    char *ptr = dest;
    while (*src && n--)
    {
        *dest++ = *src++;
    }
    while (n--)
    {
        *dest++ = '\0';
    }
    return ptr;
}

