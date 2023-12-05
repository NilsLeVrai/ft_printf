/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_upperhexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 00:44:01 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/06 00:44:01 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	args_upperhexa(va_list args)
{
	unsigned int nbr;

	nbr = va_list(args, unsigned int);
	return (ft_putnbr_base(nbr, "0123456789ABCDEF"));
}
