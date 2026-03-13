/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_string_point.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmittelb <mmittelb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:35:56 by mmittelb          #+#    #+#             */
/*   Updated: 2025/06/12 15:01:57 by mmittelb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_character(int c)
{
	char	ch;

	ch = (char)c;
	write(1, &ch, 1);
	return (1);
}

int	ft_string(char *ptr)
{
	int	i;

	i = 0;
	if (ptr == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (i < ft_strlen(ptr))
	{
		write(1, &ptr[i], 1);
		i++;
	}
	return (ft_strlen(ptr));
}

static int	ft_recurs(unsigned long adress)
{
	int	count;

	count = 0;
	if (adress >= 0x10)
		count += ft_recurs(adress / 0x10);
	adress = adress % 0x10;
	if (adress >= 0x0 && adress <= 0x9)
	{
		adress = adress + 48;
		write(1, &adress, 1);
		count++;
	}
	else
	{
		adress = adress + 87;
		write(1, &adress, 1);
		count++;
	}
	return (count);
}

int	ft_pointer(void *ptr)
{
	int				count;
	unsigned long	adress;

	count = 0;
	adress = (unsigned long)ptr;
	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (3);
	}
	write(1, "0x", 2);
	count = ft_recurs(adress);
	return (count);
}
