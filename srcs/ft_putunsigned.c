/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobriott <lobriott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:09:19 by lobriott          #+#    #+#             */
/*   Updated: 2025/11/14 19:57:17 by lobriott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_putnum(char c)
{
	c += '0';
	write(1, &c, 1);
}

static int	lennum(unsigned int i)
{
	int	len;

	len = 0;
	if (i == 0)
		return (1);
	while (i > 0)
	{
		i /= 10;
		len++;
	}
	return (len);
}

int	ft_putunsigned(unsigned int n)
{
	int	count;

	count = lennum(n);
	if (n >= 10)
	{
		ft_putunsigned(n / 10);
		ft_putnum((n % 10));
	}
	else
		ft_putnum(n);
	return (count);
}
