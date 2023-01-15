
#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
        void	*res;

        if (!dest && !src)
            return (0);
        res = dest;
        while (n)
        {
            *(char *)dest = *(char *)src;
            dest++;
            src++;
            n--;
        }
        return (res);
}