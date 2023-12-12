/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:48:53 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/12 14:29:35 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putstr_safe(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if (ft_putchar_fd_safe(str[len], 1) == -1)
			return (-1);
		len++;
	}
	return (len);
}

int	args_string(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	if (!str)
	{
		if (ft_putchar_fd_safe('(', 1) == -1)
			return (-1);
		if (ft_putchar_fd_safe('n', 1) == -1)
			return (-1);
		if (ft_putchar_fd_safe('u', 1) == -1)
			return (-1);
		if (ft_putchar_fd_safe('l', 1) == -1)
			return (-1);
		if (ft_putchar_fd_safe('l', 1) == -1)
			return (-1);
		if (ft_putchar_fd_safe(')', 1) == -1)
			return (-1);
		return (6);
	}
	return (ft_putstr_safe(str));
}
