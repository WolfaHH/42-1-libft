#include "libft.h"

static size_t	ft_start(char *s1, char *set)
{
    size_t	i;

    i = 0;
    while (s1[i] != '\0')
    {
        if (ft_strchr(set, s1[i]) == 0)
            break ;
        i++;
    }
    return (i);
}

static size_t	ft_end(char *s1, char *set)
{
    size_t	len;

    len = ft_strlen(s1);
    while (len > 0)
    {
        if (ft_strchr(set, s1[len - 1]) == 0)
            break ;
        len--;
    }
    return (len);
}

char	*ft_strtrim(char *s1, char *set)
{
    size_t	start;
    size_t	end;

    start = ft_start(s1, set);
    end = ft_end(s1, set);
    if (!set)
        return (ft_strdup(s1));
    if (start >= end)
        return (ft_strdup(""));
    return (ft_substr(s1, start, end - start));
}