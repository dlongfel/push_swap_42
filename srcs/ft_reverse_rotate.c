/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:12:20 by dlongfel          #+#    #+#             */
/*   Updated: 2020/11/24 17:12:21 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_stack **s)
{
	int		num;
	t_stack	*tmp;

	if (*s && (*s)->next)
	{
		tmp = *s;
		while (tmp->next)
			tmp = tmp->next;
		num = tmp->num;
		ft_stack_del_bot(&(*s));
		ft_stack_add_top(&(*s), ft_stack_create(num));
	}
}

void	rra(t_data *data, int mode)
{
	ft_reverse_rotate(&data->a);
	if (mode == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_data *data, int mode)
{
	ft_reverse_rotate(&data->b);
	if (mode == 0)
		write(1, "rrb\n", 4);
}

void	rrr(t_data *data, int mode)
{
	ft_reverse_rotate(&data->a);
	ft_reverse_rotate(&data->b);
	if (mode == 0)
		write(1, "rrr\n", 4);
}
