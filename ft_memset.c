# include <stddef.h>
void *ft_memset(void *s, int c, size_t n)
{
    void	*res;

    res = s;
    while (n)
    {
        *(char *)s = (unsigned char)c;
        n--;
        s++;
    }
    return (res);
}