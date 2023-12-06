/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:36:47 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/06 12:32:40 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(unsigned long nbr, const char *base)
{
	unsigned long	base_len;
	int				nb_len;

	nb_len = 0;
	base_len = ft_strlen(base);
	if (nbr >= base_len)
		nb_len += ft_putnbr_base(nbr / base_len, base);
	while (--nb_len >= 0)
	{
		write(1, &(base[nbr % base_len]), 1);
	}
	return (nb_len);
}
