/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:36:47 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/12 13:56:40 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long nbr, const char *base)
{
	unsigned long	base_len;
	int				nb_len;

	nb_len = 0;
	base_len = ft_strlen(base);
	if (nbr >= base_len)
		nb_len += ft_putnbr_base(nbr / base_len, base);
	nb_len += ft_putchar_fd_safe(base[nbr % base_len], 1);
	return (nb_len);
}
