#include "libft.h"

int		ft_atoi(const char *str)
{
    int		i;
    int		r;
    int		s;

    i = 0;
    r = 0;
    s = 1;
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;
    if (str[i] == '-')
    {
        s = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
            r = r * 10 + str[i] - '0';
        else
            break ;
        i++;
    }
    return (s * r);
}