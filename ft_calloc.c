#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
    size_t	count;
    void	*out;

    count = num * size;
    out = malloc(count);
    if (!out)
        return (NULL);
    return (ft_memset(out, 0, count));
}