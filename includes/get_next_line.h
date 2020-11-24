/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: richardbrackswaide <richardbrackswaide@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:53:25 by richardbrac       #+#    #+#             */
/*   Updated: 2020/11/24 16:53:26 by richardbrac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 100

# include "libft.h"
# include <fcntl.h>

typedef struct					s_gnl_list
{
	int							fd;
	char						*remainder;
	struct s_gnl_list			*next;
}								t_gnl;

int								get_next_line(const int fd, char **line);

#endif
