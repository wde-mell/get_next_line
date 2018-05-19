/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-mell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 09:20:21 by wde-mell          #+#    #+#             */
/*   Updated: 2018/04/12 09:31:21 by wde-mell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tab;
	size_t	i;

	i = 0;
	tab = malloc(sizeof(char) * size + 1);
	if (tab != NULL)
	{
		while (i < size)
		{
			tab[i] = '\0';
			i++;
		}
		tab[i] = '\0';
		return (tab);
	}
	else
		return (NULL);
}
