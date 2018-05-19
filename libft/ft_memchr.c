/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-mell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:36:43 by wde-mell          #+#    #+#             */
/*   Updated: 2018/04/11 16:46:37 by wde-mell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*ss;
	size_t				a;
	unsigned char		stop;

	a = 0;
	stop = (unsigned char)c;
	ss = (unsigned char*)s;
	while (n--)
	{
		if (ss[a] == stop)
			return (ss + a);
		a++;
	}
	return (NULL);
}
