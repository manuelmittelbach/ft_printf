/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit_unsigned_hexa.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmittelb <mmittelb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:36:04 by mmittelb          #+#    #+#             */
/*   Updated: 2025/06/11 19:18:01 by mmittelb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_digit(int d)
{
	long	l;
	int		digit_amount;

	digit_amount = 0;
	l = d;
	if (l < 0)
	{
		l = l * -1;
		write(1, "-", 1);
		digit_amount++;
	}
	if (l >= 10)
		digit_amount += ft_digit(l / 10);
	l = (l % 10) + '0';
	write(1, &l, 1);
	digit_amount++;
	return (digit_amount);
}

int	ft_unsigned(unsigned int u)
{
	int	digit_amount;

	digit_amount = 0;
	if (u >= 10)
		digit_amount += ft_unsigned(u / 10);
	u = (u % 10) + 48;
	write (1, &u, 1);
	digit_amount++;
	return (digit_amount);
}

int	ft_hexa(unsigned int ptr)
{
	int	count;

	count = 0;
	if (ptr >= 0x10)
		count += ft_hexa(ptr / 0x10);
	ptr = ptr % 0x10;
	if (ptr >= 0x0 && ptr <= 0x9)
	{
		ptr = ptr + 48;
		write(1, &ptr, 1);
		count++;
	}
	else
	{
		ptr = ptr + 87;
		write(1, &ptr, 1);
		count++;
	}
	return (count);
}

int	ft_hexa_caps(unsigned int ptr)
{
	int	count;

	count = 0;
	if (ptr >= 0x10)
		count += ft_hexa_caps(ptr / 0x10);
	ptr = ptr % 0x10;
	if (ptr >= 0x0 && ptr <= 0x9)
	{
		ptr = ptr + 48;
		write(1, &ptr, 1);
		count++;
	}
	else
	{
		ptr = ptr + 55;
		write(1, &ptr, 1);
		count++;
	}
	return (count);
}
