/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_pointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:30:02 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/13 14:32:18 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	args_pointer(va_list args)
{
	void	*adr;

	adr = va_arg(args, void *);
	if (adr == 0)
	{
		if (ft_putchar_fd_safe('0', 1) == -1)
			return (-1);
		if (ft_putchar_fd_safe('x', 1) == -1)
			return (-1);
		if (ft_putchar_fd_safe('0', 1) == -1)
			return (-1);
		return (3);
	}
	else
	{
		if (ft_putchar_fd_safe('0', 1) == -1)
			return (-1);
		if (ft_putchar_fd_safe('x', 1) == -1)
			return (-1);
	}
	return (ft_putnbr_base((unsigned long)adr, "0123456789abcdef") + 2);
}
