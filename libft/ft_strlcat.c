/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-mell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 17:02:50 by wde-mell          #+#    #+#             */
/*   Updated: 2018/04/09 17:09:05 by wde-mell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		len;
	size_t		c;
	char		*s;
	const char	*str;

	s = dest;
	str = src;
	c = n;
	while (c-- != 0 && *s != '\0')
		s++;
	len = s - dest;
	c = n - len;
	if (c == 0)
		return (len + ft_strlen(str));
	while (*str != '\0')
	{
		if (c != 1)
		{
			*s++ = *str;
			c--;
		}
		str++;
	}
	*s = '\0';
	return (len + (str - src));
}
