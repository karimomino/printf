/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 03:38:12 by kamin             #+#    #+#             */
/*   Updated: 2021/10/30 06:30:45 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putchar(char c, int *printed)
{
	write(1, &c, 1);
	printed++;
}

void	ft_putstr(char * str, int *printed)
{
	while (*str)
	{
		ft_putchar(*str, printed);
		str++;
	}
}

