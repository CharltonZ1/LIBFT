/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_before.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 17:42:19 by chadams           #+#    #+#             */
/*   Updated: 2018/07/11 17:54:13 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstadd_before(t_list *lst, t_list *nxt, t_list *elem)
{
	if (!lst || !elem || !nxt)
		return ;
	if (lst == nxt)
	{
		ft_lstadd(&lst, elem);
		return ;
	}
	else
	{
		while (lst != NULL)
		{
			if (lst->next == nxt)
				break ;
			lst = lst->next;
		}
		if (lst != NULL)
		{
			elem->next = lst->next;
			lst->next = elem;
		}
	}
}
