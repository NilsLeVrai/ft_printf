/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:33:36 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/06 12:37:10 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_args(const char *format, va_list args)
{
	int	i;

	i = 0;
	if (*format == 'c')
		return (args_char(args));
	else if (*format == 'd' || *format == 'i')
		i += args_digit(args);
	else if (*format == 'p')
		return (args_pointer(args));
	else if (*format == 's')
		return (args_string(args));
	else if (*format == 'u')
		return (args_unsigned(args));
	else if (*format == 'x')
		return (args_lowerhexa(args));
	else if (*format == 'X')
		return (args_upperhexa(args));
	else if (*format == '%')
		return (args_percent());
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list			args;
	unsigned int	num_args;

	num_args = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			num_args += check_args((++format), args);
		else
			num_args += write(1, format, 1);
		++format;
	}
	va_end(args);
	return (num_args);
}
