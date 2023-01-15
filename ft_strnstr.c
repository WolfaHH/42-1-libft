/*
#include "libft.h"

char *ft_strnstr(const char *haystack, const char*needle, size_t len)
{
    int	i;
    int	j;

    i = 0;
    if (needle[0] == '\0')
    {
        return (haystack);
    }
    j = 0;
    while (haystack[i] != '\0')
    {
        while (haystack[i + j] == needle[j] && haystack[i + j] != '\0')
        {
            j++;
        }
        if (needle[j] == '\0')
        {
            return (haystack + i);
        }
        j = 0;
        i++;
    }
    return (0);
}
*/