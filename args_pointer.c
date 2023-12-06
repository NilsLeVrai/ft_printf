/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_pointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:30:02 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/06 12:39:04 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	args_pointer(va_list args)
{
	void	*adr;

	adr = va_arg(args, void *);
	write(1, "0x", 2);
	return (ft_putnbr_base((unsigned long)adr, "0123456789abcdef") + 2);
}
