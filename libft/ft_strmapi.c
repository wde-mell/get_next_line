/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-mell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 13:04:10 by wde-mell          #+#    #+#             */
/*   Updated: 2018/04/12 13:24:40 by wde-mell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ss;
	int		i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		ss = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (ss == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			ss[i] = f(i, s[i]);
			i++;
		}
		ss[i] = '\0';
		return (ss);
	}
	return (0);
}
