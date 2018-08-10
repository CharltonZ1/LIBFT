/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 01:26:12 by chadams           #+#    #+#             */
/*   Updated: 2018/07/13 09:10:32 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_lst_size(t_list *lst)
{
	int		c;
	t_list	*cursor;

    c = 0;
	cursor = lst;
	if (!lst)
		return (-1);
	while (cursor)
	{
		++c;
		cursor = cursor->next;
	}
	return (c);
}
