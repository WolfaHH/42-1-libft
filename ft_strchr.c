

char	*ft_strchr(const char *s, int c)
{
    while (*s != (unsigned char)c)
    {
        if (!*s)
        {
            return 0;
        }
        s++;
    }
    return ((char *)s);
}