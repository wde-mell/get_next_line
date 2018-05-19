/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-mell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 18:01:25 by wde-mell          #+#    #+#             */
/*   Updated: 2018/04/09 18:34:37 by wde-mell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int c;

	i = 0;
	c = 0;
	if (needle[0] == '\0')
		return (char*)(haystack);
	while (haystack[i])
	{
		j = i;
		c = 0;
		while (haystack[j] == needle[c])
		{
			j++;
			c++;
			if (needle[c] == '\0')
				return (char*)(&haystack[i]);
		}
		i++;
	}
	return (0);
}
