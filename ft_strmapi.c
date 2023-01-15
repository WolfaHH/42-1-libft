
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(int, char))
{
    int	i;
    char	*out;

    i = 0;
    out = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
    if (!out || !f)
        return (NULL);
    while (s[i] != '\0')
    {
        out[i] = f(i, s[i]);
        i++;
    }
    return (out);
}