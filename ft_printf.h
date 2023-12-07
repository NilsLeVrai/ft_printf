/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:49:23 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/07 16:22:11 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "./libft/libft.h"

int	ft_printf(const char *format, ...);
int	args_char(va_list args);
int	args_digit(va_list args);
int	args_lowerhexa(va_list args);
int	args_percent(void);
int	args_pointer(va_list args);
int	args_string(va_list args);
int	args_unsigned(va_list args);
int	args_upperhexa(va_list args);

#endif
