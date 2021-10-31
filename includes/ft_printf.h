/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:02:11 by kamin             #+#    #+#             */
/*   Updated: 2021/10/31 22:10:39 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*DELETE UNDER THIS*/
#include <stdio.h>
/*DELETE ABOVE THIS*/

# include <stdarg.h>
# include <unistd.h>
# include <math.h>

int		ft_printf(const char *flags, ...);
void	ft_check_flags(const char *flags, va_list params, int *printed);
void	ft_putnbr(int n, int *printed);
void	ft_putnbr_u(unsigned int n, int *printed);
void	ft_putchar(char c, int *printed);
void	ft_putstr(char * str, int *printed);
int		ft_atoi(const char *str);
void	ft_print_pointer(int nbr, int *printed);
void	ft_hex_dec_upper(int nbr, int *printed);
void	ft_hex_dec(int nbr, int *printed);
int		ft_isdigit(int c);
#endif
