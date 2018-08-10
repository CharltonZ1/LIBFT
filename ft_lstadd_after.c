/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_after.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 17:47:07 by chadams           #+#    #+#             */
/*   Updated: 2018/07/11 17:51:07 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstadd_after(t_list *lst, t_list *prev, t_list *elem)
{
	if (!lst || !prev || !elem)
		return ;
	while (lst != prev)
		lst = lst->next;
	if (lst->next != NULL)
	{
		elem->next = lst->next;
		lst->next = elem;
	}
	else
		ft_lstapp(lst, elem);
}
