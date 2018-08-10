/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 00:35:22 by chadams           #+#    #+#             */
/*   Updated: 2018/07/10 00:38:42 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_lst;

	new_lst = (t_list *)malloc(sizeof(t_list));
	if (!content || content == 0)
	{
		new_lst->content = NULL;
		new_lst->content_size = 0;
	}
	else
	{
		new_lst->content = (void *)content;
		new_lst->content_size = content_size;
	}
	new_lst->next = NULL;
	return (new_lst);
}
