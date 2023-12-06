/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_digit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 00:21:55 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/06 17:46:45 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	args_digit(va_list args)
{
	long	nbr;
	int	is_neg;

	nbr = va_arg(args, int);
	is_neg = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		is_neg++;
		write(1, "-", 1);
	}
	return (ft_putnbr(nbr, "0123456789") + is_neg);
}
