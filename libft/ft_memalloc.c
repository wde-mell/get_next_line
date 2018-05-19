/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-mell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 18:35:52 by wde-mell          #+#    #+#             */
/*   Updated: 2018/04/11 18:37:05 by wde-mell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*tab;
	size_t	a;

	a = 0;
	tab = malloc(size);
	if (tab != NULL)
	{
		while (a < size)
		{
			tab[a] = '\0';
			a++;
		}
		return (tab);
	}
	return (NULL);
}
