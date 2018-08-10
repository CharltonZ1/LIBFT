/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 22:41:55 by chadams           #+#    #+#             */
/*   Updated: 2018/07/10 22:45:12 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstfind(t_list *lst, t_list *elem)
{
	t_list	*cursor;

	cursor = lst;
	while (cursor)
	{
		if (cursor->next == elem)
			return (cursor);
		cursor = cursor->next;
	}
	return (NULL);
}
