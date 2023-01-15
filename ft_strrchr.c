

char	*ft_strrchr(const char *s, int c)
{
    char tmp = *s;
    while (*s != '\0')
    {
        s++;
    }
    while (*s != (unsigned char)c)
    {
        if (*s == tmp)
        {
            return 0;
        }
        s--;
    }
    return ((char *)s);
}