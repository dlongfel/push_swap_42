/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:12:38 by dlongfel          #+#    #+#             */
/*   Updated: 2020/11/24 17:12:38 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **s)
{
	t_stack	*tmp;

	if (*s && (*s)->next)
	{
		tmp = (*s)->next;
		if (tmp->next)
			tmp->next->prev = *s;
		(*s)->prev = tmp;
		(*s)->next = tmp->next;
		tmp->prev = NULL;
		tmp->next = *s;
		*s = tmp;
	}
}

void	sa(t_data *data, int mode)
{
	ft_swap(&(data->a));
	if (mode == 0)
		write(1, "sa\n", 3);
}

void	sb(t_data *data, int mode)
{
	ft_swap(&(data->b));
	if (mode == 0)
		write(1, "sb\n", 3);
}

void	ss(t_data *data, int mode)
{
	ft_swap(&(data->a));
	ft_swap(&(data->b));
	if (mode == 0)
		write(1, "ss\n", 3);
}
