#include "libft.h"


static int
	ft_abs(int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

void	ft_putnbr_fd(int n, int fd)
{
    if (n == (int)-2147483648)
    {
        ft_putstr_fd("-2147483648", fd);
        return ;
    }
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = ft_abs(n);
    }
    if (n < 10)
    {
        ft_putchar_fd(n + '0', fd);
    }
    else
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
}