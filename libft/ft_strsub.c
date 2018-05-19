/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-mell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 14:54:36 by wde-mell          #+#    #+#             */
/*   Updated: 2018/04/13 11:20:18 by wde-mell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*tab;
	size_t		a;

	a = 0;
	if (!(tab = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (s != NULL)
	{
		while (a < len)
		{
			tab[a] = s[start];
			a++;
			start++;
		}
	}
	else
		return (NULL);
	tab[a] = '\0';
	return (tab);
}
