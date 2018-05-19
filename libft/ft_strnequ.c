/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-mell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 14:28:36 by wde-mell          #+#    #+#             */
/*   Updated: 2018/04/12 14:41:24 by wde-mell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (s1 != NULL && s2 != NULL)
	{
		while (i < n)
		{
			if (s1[i] == s2[j])
				j++;
			i++;
		}
		if (i == j)
			return (1);
	}
	return (0);
}
