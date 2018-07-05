/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chadams <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 20:55:25 by chadams           #+#    #+#             */
/*   Updated: 2018/07/05 23:59:15 by chadams          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_itoa_base(int value, int base)
{
	char	*str;
	char	*base_str;
	long	nbr;
	int		len;

	if (value == 0)
		return ("0");
	len = 0;
	nbr = value;
	base_str = "0123456789ABCDEF";
	while (nbr)
	{
		nbr /= base;
		++len;
	}
	nbr = value;
	if (value < 0)
	{
		if (base == 10)
			++len;
		nbr *= -1;
	}
	if ((str = (char *)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	str[len--] = '\0';
	while (nbr)
	{
		str[--len] = base_str[nbr % base];
		nbr /= base;
	}
	if (nbr < 0 && base == 10)
		str[0] = '-';
	return (str);
}
