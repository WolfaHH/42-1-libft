
#include <stddef.h>

void *memmove(void *dest, const void *src, size_t n)
{
    void	*res;

    if (!dest && !src)
        return (0);
    res = dest;
    if (src < dest)
    {
        src += n;
        dest += n;
        while (n)
        {
            *(char *)dest = *(char *)src;
            dest--;
            src--;
            n--;
        }

    }
    else
    {
        while (n)
        {
            *(char *)dest = *(char *)src;
            dest++;
            src++;
            n--;
        }
    }
    return (res);
}
