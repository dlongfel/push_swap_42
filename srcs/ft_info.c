/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:12:02 by dlongfel          #+#    #+#             */
/*   Updated: 2020/11/24 17:12:03 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	info_min(t_stack *stack)
{
	long int	min;

	min = stack->num;
	while (stack)
	{
		min = (min > stack->num) ? stack->num : min;
		stack = stack->next;
	}
	return (min);
}

int	info_stack_len(t_stack *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		stack = stack->next;
		count++;
	}
	return (count);
}

int	info_max(t_stack *stack)
{
	long int	max;

	max = stack->num;
	while (stack)
	{
		max = (max < stack->num) ? stack->num : max;
		stack = stack->next;
	}
	return (max);
}
