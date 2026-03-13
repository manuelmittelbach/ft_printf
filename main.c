/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmittelb <mmittelb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 19:01:36 by mmittelb          #+#    #+#             */
/*   Updated: 2025/06/13 15:02:13 by mmittelb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>


// Note: the return of ft_printf is +3 here because the literal 
//"ft_printf: " is 3 characters longer than "printf: ", 
//not because of a bug in ft_printf.

int	main(void)
{
	int	ret1;
	int	ret2;

	printf("---- CHAR ----\n");
	ret1 = printf("printf: %c\n", 'A');
	ret2 = ft_printf("ft_printf: %c\n", 'A');
	printf("return printf: %d\nreturn ft_printf: %d\n\n", ret1, ret2);

	printf("---- STRING ----\n");
	ret1 = printf("printf: %s\n", "Hello World");
	ret2 = ft_printf("ft_printf: %s\n", "Hello World");
	printf("return printf: %d\nreturn ft_printf: %d\n\n", ret1, ret2);

	printf("---- INT ----\n");
	ret1 = printf("printf: %d\n", 42);
	ret2 = ft_printf("ft_printf: %d\n", 42);
	printf("return printf: %d\nreturn ft_printf: %d\n\n", ret1, ret2);

	printf("---- NEGATIVE INT ----\n");
	ret1 = printf("printf: %i\n", -42);
	ret2 = ft_printf("ft_printf: %i\n", -42);
	printf("return printf: %d\nreturn ft_printf: %d\n\n", ret1, ret2);

	printf("---- UNSIGNED ----\n");
	ret1 = printf("printf: %u\n", 4294967295U);
	ret2 = ft_printf("ft_printf: %u\n", 4294967295U);
	printf("return printf: %d\nreturn ft_printf: %d\n\n", ret1, ret2);

	printf("---- HEX ----\n");
	ret1 = printf("printf: %x %X\n", 255, 255);
	ret2 = ft_printf("ft_printf: %x %X\n", 255, 255);
	printf("return printf: %d\nreturn ft_printf: %d\n\n", ret1, ret2);

	printf("---- POINTER ----\n");
	ret1 = printf("printf: %p\n", &ret1);
	ret2 = ft_printf("ft_printf: %p\n", &ret1);
	printf("return printf: %d\nreturn ft_printf: %d\n\n", ret1, ret2);

	printf("---- PERCENT ----\n");
	ret1 = printf("printf: %%\n");
	ret2 = ft_printf("ft_printf: %%\n");
	printf("return printf: %d\nreturn ft_printf: %d\n\n", ret1, ret2);

	return (0);
}
