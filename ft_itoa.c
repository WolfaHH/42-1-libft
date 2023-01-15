#include <stdlib.h>
#include "libft.h"

int ft_numlen(int n, int base)
{
    int c;

    c = 0;
    if (n <= 0)
    {
        c++;
    }
    while (n && c++)
    {
        n /= base ;
    }
    return (c);
}

char	*ft_itoa(int n)
{
    int			len;
    char		*ret;
    const char	*digits = "0123456789";

    len = ft_numlen(n, 10);
    ret = malloc(sizeof(char) * (len + 1));
    if (!ret)
        return (0);
    ret[len] = 0;
    if (n == 0)
        ret[0] = '0';
    if (n < 0)
        ret[0] = '-';
    while (n)
    {
        if (n > 0)
            ret[--len] = digits[n % 10];
        else
            ret[--len] = digits[n % 10 * -1];
        n /= 10;
    }
    return (ret);
}