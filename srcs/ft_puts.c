/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 03:38:12 by kamin             #+#    #+#             */
/*   Updated: 2021/10/31 23:09:02 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putchar(char c, int *printed)
{
	write(1, &c, 1);
	(*printed)++;
}

void	ft_putstr(char * str, int *printed)
{
	if (str == NULL)
		ft_putstr("(null)", printed);
	else
		while (*str)
		{
			ft_putchar(*str, printed);
			str++;
		}
}

static int		ft_isspace_atoi(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
		c == '\r' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}

int		ft_atoi(const char *str)
{
	int i;
	int	minus;
	int	num;

	i = 0;
	minus = 1;
	num = 0;
	while (ft_isspace_atoi(str[i]))
		i = i + 1;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '-' || str[i] == '+')
		i = i + 1;
	while (ft_isdigit(str[i]))
	{
		num = num * 10 + str[i] - '0';
		i = i + 1;
	}
	return (num * minus);
}

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

