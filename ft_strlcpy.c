#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
    size_t	i;

    i = 0;
    if (size <= 0)
        return (ft_strlen(src));
    while (src[i] != '\0' && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

/* 
	if (!src || !dst || *src == '\0')
		return (0);
	((char *)ft_memcpy(dst, src, size))[size] = '\0';
	return (size);
*/