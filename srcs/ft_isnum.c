/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: richardbrackswaide <richardbrackswaide@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:50:38 by richardbrac       #+#    #+#             */
/*   Updated: 2020/11/24 16:50:39 by richardbrac      ###   ########.fr       */
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
