/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-mell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 06:38:29 by wde-mell          #+#    #+#             */
/*   Updated: 2018/04/11 07:20:06 by wde-mell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str1;

	str1 = 0;
	while (*s)
	{
		if (*s == (char)c)
			str1 = (char*)s;
		s++;
	}
	if (*s == (char)c)
		str1 = (char *)s;
	return (str1);
}
