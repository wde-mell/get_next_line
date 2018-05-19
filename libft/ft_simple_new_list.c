/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_new_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-mell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 17:20:16 by wde-mell          #+#    #+#             */
/*   Updated: 2018/05/12 17:50:10 by wde-mell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_simple_new_list(void *a, int nb)
{
	t_list	*maillon;

	if (!(maillon = (t_list*)malloc(sizeof(t_list))))
		return (0);
	maillon->content = a;
	maillon->content_size = nb;
	maillon->next = NULL;
	return (maillon);
}
