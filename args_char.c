/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:12:56 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/11 14:51:24 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	args_char(va_list args)
{
	char	c;

	c = va_arg(args, int);
	return (ft_putchar_fd_safe(c, 1));
}
