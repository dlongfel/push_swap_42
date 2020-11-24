/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:17:35 by dlongfel          #+#    #+#             */
/*   Updated: 2020/08/11 14:17:35 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_sqrt(int nb)
{
	int		i;
	int		j;

	i = 0;
	while (i <= nb)
	{
		j = i * i;
		if (j == nb)
			return (i);
		else if (j < nb)
			i++;
		else
			return (0);
	}
	return (0);
}
