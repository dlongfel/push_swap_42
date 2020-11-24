/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:12:47 by dlongfel          #+#    #+#             */
/*   Updated: 2020/11/24 17:12:47 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	go_s(char *str, t_data *frame)
{
	if (str[1] == 'a' && str[2] == '\0')
		sa(frame, 1);
	else if (str[1] == 'b' && str[2] == '\0')
		sb(frame, 1);
	else if (str[1] == 's' && str[2] == '\0')
		ss(frame, 1);
	else
		ft_error(frame);
}

void	go_r(char *str, t_data *frame)
{
	if (str[1] == 'a' && str[2] == '\0')
		ra(frame, 1);
	else if (str[1] == 'b' && str[2] == '\0')
		rb(frame, 1);
	else if (str[1] == 'r' && str[2] == '\0')
		rr(frame, 1);
	else
		ft_error(frame);
}

void	go_rr(char *str, t_data *frame)
{
	if (str[2] == 'a' && str[3] == '\0')
		rra(frame, 1);
	else if (str[2] == 'b' && str[3] == '\0')
		rrb(frame, 1);
	else if (str[2] == 'r' && str[3] == '\0')
		rrr(frame, 1);
	else
		ft_error(frame);
}

void	go_p(char *str, t_data *frame)
{
	if (str[1] == 'a' && str[2] == '\0')
		pa(frame, 1);
	else if (str[1] == 'b' && str[2] == '\0')
		pb(frame, 1);
	else
		ft_error(frame);
}

void	go_ft(char *str, t_data *frame)
{
	if (str[0] == 's')
		go_s(str, frame);
	else if (str[0] == 'r' && str[2] == '\0')
		go_r(str, frame);
	else if (str[0] == 'r' && str[2] != '\0')
		go_rr(str, frame);
	else if (str[0] == 'p')
		go_p(str, frame);
	else
		ft_error(frame);
}
