/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_pointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:30:02 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/05 23:30:02 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	args_pointer(va_list args)
{
	void	*adr;

	adr = va_arg(args, void*);
	ft_putstr_fd("0x", 1);
	return (ft_putnbr_base((unsigned long)adr, "0123456789abcdef") + 2);
}
