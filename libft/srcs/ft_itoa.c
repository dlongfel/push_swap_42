/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:15:31 by dlongfel          #+#    #+#             */
/*   Updated: 2020/08/11 14:15:32 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_count(unsigned int n, size_t i)
{
	if (n == 0)
		return (++i);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void			ft_addl(char *ch, size_t i, unsigned int nbr, int x)
{
	ch[i] = '\0';
	i--;
	if (nbr != 0)
	{
		while (nbr > 0)
		{
			ch[i--] = (nbr % 10) + '0';
			nbr = nbr / 10;
		}
		if (x == 1)
			ch[i] = '-';
	}
	else
		ch[i] = '0';
}

char				*ft_itoa(int n)
{
	size_t			i;
	int				x;
	char			*ch;
	unsigned int	nbr;

	x = 0;
	i = 0;
	nbr = (unsigned int)n;
	if (n < 0)
	{
		i++;
		nbr = (unsigned int)n * -1;
		x = 1;
	}
	i = ft_count(nbr, i);
	if (!(ch = malloc(sizeof(char) * i + 1)))
		return (NULL);
	ft_addl(ch, i, nbr, x);
	return (ch);
}
