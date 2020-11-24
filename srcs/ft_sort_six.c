/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_six.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: richardbrackswaide <richardbrackswaide@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:51:04 by richardbrac       #+#    #+#             */
/*   Updated: 2020/11/24 16:51:04 by richardbrac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_pb(t_data *frame, int id)
{
	int i;

	i = info_stack_len(frame->a) - id + 1;
	while (i > 0)
	{
		ra(frame, 0);
		i--;
	}
	pb(frame, 0);
}

void	rra_pb(t_data *frame, int id)
{
	int	i;

	i = id - 1;
	while (i > 0)
	{
		rra(frame, 0);
		i--;
	}
	pb(frame, 0);
}
