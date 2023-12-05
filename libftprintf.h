/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:10:05 by niabraha          #+#    #+#             */
/*   Updated: 2023/11/16 12:13:42 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "./libft/libft.h"

int ft_printf(const char* format, ...);
int args_percent(va_list args);
int args_char(va_list args);
int args_digit(va_list args);
int args_lowerhexa(va_list args);
int args_pointer(va_list args);
int args_string(va_list args);
int args_unsigned(va_list args);
int args_upperhexa(va_list args);

#endif
