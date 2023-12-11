/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:12:56 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/06 12:36:51 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_putchar_fd_safe(char c, int fd)
{
    if (write(fd, &c, 1) == -1)
        return (-1);
    return (1);
}

int	args_char(va_list args)
{
	char	c;

	c = va_arg(args, int);
	return (ft_putchar_fd_safe(c, 1));
}
