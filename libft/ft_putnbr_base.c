/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:36:47 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/05 23:36:47 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(unsigned long nbr, const char *base)
{
	size_t	base_len;
	int		nb_len;

	nb_len = 0;
	base_len = ft_strlen(nbr);
	if (nbr >= base_len)
		nb_len += ft_putnbr_base(nbr / base_len, base);
	nb_len += ft_putchar(base[nbr % base_len]);
	return (nb_len);
}
