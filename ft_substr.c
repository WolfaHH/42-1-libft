#include "libft.h"
#include <stdio.h>

char *ft_substr(char *s, unsigned int start, size_t len)
{
    char	*sub;
    size_t	strln;

    strln = ft_strlen(s);
    if (start > strln)
        return (ft_strdup(""));
    if (len > strln - start)
        return (ft_strdup(s + start));
    sub = (char *)malloc((len + 1) * sizeof(char));
    if (!sub)
        return (NULL);
    ft_strlcpy(sub, &s[start], len + 1);
    sub[len] = '\0';
    return (sub);
}