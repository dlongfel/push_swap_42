/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:17:39 by dlongfel          #+#    #+#             */
/*   Updated: 2020/08/11 14:17:40 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *ap)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!dst && !ap)
		return (NULL);
	while (dst[i])
		i++;
	while (ap[j])
		dst[i++] = ap[j++];
	dst[i] = '\0';
	return (dst);
}
