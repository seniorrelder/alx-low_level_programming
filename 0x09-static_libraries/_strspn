unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    char *a;
    while (*s)
    {
        for (a = accept; *a; a++)
        {
            if (*s == *a)
                break;
        }
        if (*a == '\0')
            return count;
        count++;
        s++;
    }
    return count;
}

