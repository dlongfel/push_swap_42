/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:16:18 by dlongfel          #+#    #+#             */
/*   Updated: 2020/08/11 14:16:18 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*ch;
	size_t			i;

	ch = (unsigned char *)arr;
	i = 0;
	while (i < n)
	{
		if (ch[i] == (unsigned char)c)
			return (&ch[i]);
		i++;
	}
	return (NULL);
}
