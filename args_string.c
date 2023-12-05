/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:48:53 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/05 16:51:34 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int args_string(const char *str)
{
	int	len;

	len = 0;
	while(*str)
	{
		args_char((int)*str);;
		len++;
		str++;
	}
	return (len);
}