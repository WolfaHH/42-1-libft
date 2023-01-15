/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:49:30 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/06 16:49:36 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int main(void)
{
	char chaine[] = "Hello!";
	ft_putstr(chaine);
	printf("%d", ft_putstr(chaine));
    return 0;
}
*/
