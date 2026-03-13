/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmittelb <mmittelb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:49:19 by mmittelb          #+#    #+#             */
/*   Updated: 2025/06/12 14:59:57 by mmittelb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_percent(int percent)
{
	char	ch;

	ch = (char)percent;
	write(1, &ch, 1);
	return (1);
}

int	print_format(char specifier, va_list args)
{
	int	total;

	total = 0;
	if (specifier == 'c')
		total = ft_character(va_arg(args, int));
	if (specifier == 's')
		total = ft_string(va_arg(args, char *));
	if (specifier == 'p')
		total = ft_pointer(va_arg(args, void *)) + 2;
	if (specifier == 'd')
		total = ft_digit(va_arg(args, int));
	if (specifier == 'i')
		total = ft_digit(va_arg(args, int));
	if (specifier == 'u')
		total = ft_unsigned(va_arg(args, unsigned int));
	if (specifier == 'x')
		total = ft_hexa(va_arg(args, unsigned int));
	if (specifier == 'X')
		total = ft_hexa_caps(va_arg(args, unsigned int));
	if (specifier == '%')
		total = ft_percent('%');
	return (total);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		total;

	i = 0;
	total = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			total = total + print_format(format[++i], args);
		else
		{
			write(1, &format[i], 1);
			total++;
		}
		i++;
	}
	va_end(args);
	return (total);
}
