/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:12:07 by dlongfel          #+#    #+#             */
/*   Updated: 2020/11/24 17:12:08 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isnum(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == '+' || *str == '-')
			str++;
		while (*str)
		{
			if (*str == ' ')
				break ;
			if (!ft_isdigit(*str))
				return (0);
			str++;
		}
		while (*str)
		{
			if (*str != ' ')
				break ;
			str++;
		}
	}
	return (1);
}
