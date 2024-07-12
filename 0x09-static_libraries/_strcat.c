char *_strcat(char *dest, char *src)
{
    char *ptr = dest + _strlen(dest);
    while (*src)
    {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}

