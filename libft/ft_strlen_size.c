/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-mell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 17:04:47 by wde-mell          #+#    #+#             */
/*   Updated: 2018/05/12 17:47:38 by wde-mell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen_size(char *str, char c)
{
	size_t		length;

	length = 0;
	while (str[length] != c && str[length] != '\0')
		length++;
	return (length);
}
