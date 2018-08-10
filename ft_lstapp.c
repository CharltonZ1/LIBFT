/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 01:57:49 by chadams           #+#    #+#             */
/*   Updated: 2018/07/13 08:56:12 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstapp(t_list *lst, t_list *elem)
{
	if (!lst || !elem)
		return ;
	while (lst->next)
		lst = lst->next;
	lst->next = elem;
}
