#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
    size_t	i;
    size_t	dstlen;

    i = 0;
    dstlen = ft_strlen(dst);
    if (!n || dstlen >= n)
        return (ft_strlen(src) + n);
    while (src[i] && i < n - dstlen - 1)
    {
        dst[dstlen + i] = src[i];
        i++;
    }
    dst[dstlen + i] = '\0';
    return (ft_strlen(src) + dstlen);
}