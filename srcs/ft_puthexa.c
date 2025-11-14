/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobriott <lobriott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:17:53 by lobriott          #+#    #+#             */
/*   Updated: 2025/11/14 19:47:47 by lobriott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	lennum(unsigned int num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / 16;
		count++;
	}
	return (count);
}

int	ft_puthexa(unsigned int num, int flag)
{
	char	*hexa;
	int		len;

	len = lennum(num);
	hexa = "0123456789ABCDEF";
	if (flag == 1)
		hexa = "0123456789abcdef";
	if (num < 16)
		write(1, &hexa[num], 1);
	if (num >= 16)
	{
		ft_puthexa(num / 16, flag);
		ft_puthexa(num % 16, flag);
	}
	return (len);
}
