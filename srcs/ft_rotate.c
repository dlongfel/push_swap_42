/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: richardbrackswaide <richardbrackswaide@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:50:58 by richardbrac       #+#    #+#             */
/*   Updated: 2020/11/24 16:50:59 by richardbrac      ###   ########.fr       */
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
