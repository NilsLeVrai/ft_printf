/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_digit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 00:21:55 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/07 16:17:22 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	args_digit(va_list args)
{
	long	nbr;
	int		is_neg;

	nbr = va_arg(args, int);
	is_neg = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		is_neg++;
		if (write(1, &c, 1) == -1)
			return (-1);
		write(1, "-", 1);
	}
	return (ft_putnbr_base(nbr, "0123456789") + is_neg);
}
