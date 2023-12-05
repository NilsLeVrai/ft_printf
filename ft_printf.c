/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:33:36 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/05 15:56:48 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	check_args(const char *format, va_list args)
{
	int	i;

	i = 0;
	/* if (*format == '%')
		i += args_char((unsigned char)va_arg(args, unsigned int)); */
	if (*format == 'c')
		return (args_char((unsigned char)va_arg(args, unsigned int)));
	/*if (*format == 'd' || *format == 'i' || *format == 'u')
		i += args_digit((int)va_arg(args, int), (format == 'u'));*/
	/*if (*format == 'p')
		i += args_pointer((void*)va_arg(args, void*));  */
	if (*format == 's')
		return (args_string((char*)va_arg(args, char*)));
	/* if (*format == 'x' || *format == 'X')
		i += args_hexa(((unsigned int)va_arg(args, int))); */
	else
		i = -1; // -= 1; a tester
	return (i);
}

int ft_printf(const char *format, ...)
{
	va_list			args;
	unsigned int	num_args;

	num_args = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			num_args += check_args((++format), args);
		else
			num_args += write(1, format, 1);
		++format;
	}
	va_start(args, format);
	va_end(args);
	return (num_args);
}
