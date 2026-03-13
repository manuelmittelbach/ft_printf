/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmittelb <mmittelb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 19:01:56 by mmittelb          #+#    #+#             */
/*   Updated: 2025/06/12 15:02:53 by mmittelb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_character(int c);
int	ft_string(char *ptr);
int	ft_pointer(void *ptr);
int	ft_digit(int d);
int	ft_unsigned(unsigned int u);
int	ft_hexa(unsigned int ptr);
int	ft_hexa_caps(unsigned int ptr);
int	ft_strlen(const char *s);
int	ft_percent(int percent);
int	print_format(char specifier, va_list args);
int	ft_printf(const char *format, ...);

#endif
