/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-mell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 11:55:33 by wde-mell          #+#    #+#             */
/*   Updated: 2018/05/12 20:39:41 by wde-mell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void		ft_strcpy_clean(char dest[BUFF_SIZE + 1], char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= BUFF_SIZE)
	{
		dest[i] = '\0';
		i++;
	}
}

static int		gnl_subfunc(char buf[BUFF_SIZE + 1], size_t len, char *line)
{
	if (!buf[0] && line[0])
		buf[0] = '\0';
	else
		ft_strcpy_clean(buf, &(buf[len + 1]));
	return (1);
}

int				get_next_line(int const fd, char **line)
{
	int			ret;
	char		*temp;
	size_t		length;
	static char	buf[OPEN_MAX][BUFF_SIZE + 1];

	if (fd < 0 || !line)
		return (-1);
	*line = ft_strnew(1);
	ret = 1;
	while (ret > 0)
	{
		if (!buf[fd][0])
			ret = read(fd, &buf[fd], BUFF_SIZE);
		if (ret < 0)
			return (ret);
		length = ft_strlen_size(buf[fd], '\n');
		temp = *line;
		*line = ft_strnjoin(temp, buf[fd], length);
		free(temp);
		if (buf[fd][length] || (!buf[fd][0] && *line[0]))
			return (gnl_subfunc(buf[fd], length, *line));
		ft_strclr((char *)&buf[fd]);
	}
	return (0);
}
