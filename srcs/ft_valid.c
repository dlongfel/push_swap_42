/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: richardbrackswaide <richardbrackswaide@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:51:41 by richardbrac       #+#    #+#             */
/*   Updated: 2020/11/24 16:51:42 by richardbrac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_unic(t_data *frame)
{
	t_stack *tmp;
	t_stack *stack;

	stack = frame->a;
	while (stack->next)
	{
		tmp = stack->next;
		while (tmp)
		{
			if (stack->num == tmp->num)
				ft_error(frame);
			tmp = tmp->next;
		}
		stack = stack->next;
	}
}

int		check_valid(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (!ft_isnum(argv[i]))
			return (0);
		i++;
	}
	return (1);
}
