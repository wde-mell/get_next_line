/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-mell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 12:34:26 by wde-mell          #+#    #+#             */
/*   Updated: 2018/04/12 12:57:32 by wde-mell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s2;
	int		i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		s2 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (s2 == NULL)
			return (NULL);
		while (s[i])
		{
			s2[i] = f(s[i]);
			i++;
		}
		s2[i] = '\0';
		return (s2);
	}
	return (0);
}
