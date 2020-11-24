/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:12:25 by dlongfel          #+#    #+#             */
/*   Updated: 2020/11/24 17:12:25 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stack **s)
{
	int	num;

	if (*s && (*s)->next)
	{
		num = (*s)->num;
		ft_stack_del_top(&(*s));
		ft_stack_add_bot(&(*s), ft_stack_create(num));
	}
}

void	ra(t_data *data, int mode)
{
	ft_rotate(&data->a);
	if (mode == 0)
		write(1, "ra\n", 3);
}

void	rb(t_data *data, int mode)
{
	ft_rotate(&data->b);
	if (mode == 0)
		write(1, "rb\n", 3);
}

void	rr(t_data *data, int mode)
{
	ft_rotate(&data->a);
	ft_rotate(&data->b);
	if (mode == 0)
		write(1, "rr\n", 3);
}
