#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
    char	new_line;

    new_line = '\n';
    write(fd, s, ft_strlen(s));
    write(fd, &new_line, 1);
}