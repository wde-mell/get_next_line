/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-mell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 12:55:59 by wde-mell          #+#    #+#             */
/*   Updated: 2018/04/11 13:20:12 by wde-mell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*src1;
	char	*dest1;

	if (n == 0 || dest == src)
		return (dest);
	i = 0;
	src1 = (char*)src;
	dest1 = (char*)dest;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
