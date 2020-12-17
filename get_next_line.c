/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <gigregoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 17:02:18 by gigregoi          #+#    #+#             */
/*   Updated: 2020/09/05 18:35:54 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

static t_list		*get_file(t_list **files, int fd)
{
	t_fileread		*fread;
	t_list			*elem;

	elem = *files;
	while (elem)
	{
		fread = (t_fileread*)(elem->content);
		if (fread->fd == fd)
			return (elem);
		elem = elem->next;
	}
	fread = (t_fileread*)ft_memalloc(sizeof(t_fileread));
	fread->fd = fd;
	fread->mot_search = ft_strnew(0);
	elem = ft_lstnew((void*)fread, sizeof(t_fileread));
	ft_memdel((void**)(&fread));
	ft_lstadd(files, elem);
	return (elem);
}

static void			remove_from_list(t_list **files, int fd)
{
	t_fileread		*fread;
	t_list			*elem;
	t_list			*prec;

	prec = NULL;
	elem = *files;
	while (elem)
	{
		fread = (t_fileread*)(elem->content);
		if (fread->fd == fd)
		{
			if (prec)
				prec->next = elem->next;
			else
				*files = elem->next;
			ft_strdel(&fread->mot_search);
			ft_memdel((void**)(&fread));
			ft_memdel((void**)&elem);
			break ;
		}
		prec = elem;
		elem = elem->next;
	}
}

static int			appendbuf(char **p, char *buf)
{
	char			*pc;

	if (!*p)
	{
		if (!(*p = ft_strdup(buf)))
			return (-1);
	}
	else
	{
		if (!(pc = ft_strjoin(*p, buf)))
			return (-1);
		free(*p);
		*p = pc;
	}
	return (0);
}

static int			cutend(t_fileread *fread, char **line)
{
	int				i;
	char			*p;

	i = 0;
	while ((fread->mot_search)[i] != '\n' \
			&& (fread->mot_search)[i] != '\0')
		i++;
	if ((fread->mot_search)[i] == '\n')
	{
		if (!(*line = ft_strsub(fread->mot_search, 0, i)))
			return (-1);
		if (!(p = ft_strdup((fread->mot_search) + i + 1)))
			return (-1);
		free(fread->mot_search);
		fread->mot_search = p;
	}
	else if (!(fread->mot_search)[i])
	{
		*line = ft_strdup(fread->mot_search);
		fread->mot_search[0] = 0;
	}
	return (1);
}

int					get_next_line(const int fd, char **line)
{
	static t_list	*files;
	t_fileread		*fread;
	char			buf[BUFF_SIZE + 1];
	int				ret;

	if (fd < 0 || line == NULL)
		return (-1);
	fread = (t_fileread*)(get_file(&files, fd)->content);
	if (!fread || (ret = read(fread->fd, buf, 0)) < 0)
		return (-1);
	while (!(ft_strchr(fread->mot_search, '\n')) && \
			(ret = read(fread->fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = 0;
		if (appendbuf(&fread->mot_search, buf))
			return (-1);
	}
	if (!(ret) && (fread->mot_search[0] == 0))
	{
		remove_from_list(&files, fd);
		return (0);
	}
	return (cutend(fread, line));
}
