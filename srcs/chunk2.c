/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:11:49 by dlongfel          #+#    #+#             */
/*   Updated: 2020/11/24 17:11:49 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	to_up(t_data *frame, int *i)
{
	*i = *i + 1;
	pb(frame, 0);
}

void	to_down(t_data *frame, int *i)
{
	*i = *i + 1;
	pb(frame, 0);
	rb(frame, 0);
}

void	even_chunk(t_data *frame, t_arrint *arr, int chunk_id, int chunk_len)
{
	int j;
	int k;
	int i;

	i = 0;
	j = 0;
	k = 0;
	while (k <= chunk_id / 2)
	{
		while ((i < chunk_len || j < chunk_len) && frame->a)
		{
			if (arr_cmp(arr, chunk_id / 2 + k, frame->a->num, chunk_len))
				to_up(frame, &i);
			else if (arr_cmp(arr, chunk_id / 2 - 1 - k, \
						frame->a->num, chunk_len))
				to_down(frame, &j);
			else
				ra(frame, 0);
		}
		k++;
		j = 0;
		i = 0;
	}
}
