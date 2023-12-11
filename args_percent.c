/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:21:28 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/06 12:36:59 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_putchar_fd_safe(char c, int fd)
{
	if (write(fd, &c, 1) == -1)
		return (-1);
	return (1);
}

int	args_percent(void)
{
	char	c;

	c = '%';
	return (ft_putchar_fd_safe(c, 1));
}
