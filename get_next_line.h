/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <gigregoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 16:45:15 by gigregoi          #+#    #+#             */
/*   Updated: 2020/09/04 16:48:32 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <sys/types.h>
# include "libft.h"
# ifndef BUFF_SIZE
#  define BUFF_SIZE 32
# endif

typedef struct		s_fileread
{
	int				fd;
	char			*mot_search;
}					t_fileread;

int					get_next_line(int fd, char **line);

#endif
