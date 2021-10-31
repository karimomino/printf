/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 03:45:58 by kamin             #+#    #+#             */
/*   Updated: 2021/10/31 23:31:40 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static long	check_minus(long num, int *printed)
{
	char	c;

	if (num < 0)
	{
		c = '-';
		write(1, &c, 1);
		(*printed)++;
		return (-num);
	}
	return (num);
}

static int	ft_intlen(int num)
{
	int	numlen;
	int	minus;

	numlen = 0;
	minus = 0;
	if (num == 0)
	{
		numlen = 1;
	}
	if (num < 0)
	{
		numlen++;
		num = -1 * num;
		minus = 1;
	}
	while (num != 0)
	{
		num = num / 10;
		numlen++;
	}
	return (numlen - minus);
}

static int	ft_intlen_u(unsigned long num)
{
	int	numlen;
	int	minus;

	numlen = 0;
	minus = 0;
	if (num == 0)
	{
		numlen = 1;
	}
	if (num < 0)
	{
		numlen++;
		num = -1 * num;
		minus = 1;
	}
	while (num != 0)
	{
		num = num / 10;
		numlen++;
	}
	return (numlen - minus);
}

void	ft_putnbr(int n, int *printed)
{
	long	num;
	int		nlen;
	int		delim;
	int		nlencpy;

	num = (long)n;
	nlen = ft_intlen(n);
	delim = 1;
	nlencpy = nlen;
	if (num == 0)
		ft_putchar('0', printed);
	else
	{
		num = check_minus((long)n, printed);
		while (--nlen > 0)
			delim = delim * 10;
		while (nlencpy-- > 0)
		{
			ft_putchar(((num / delim) + '0'), printed);
			num = num - ((num / delim) * delim);
			delim = delim / 10;
		}
	}
}

void	ft_putnbr_u(unsigned int n, int *printed)
{
	unsigned long	num;
	int		nlen;
	int		delim;
	int		nlencpy;

	num = (unsigned long)n;
	nlen = ft_intlen_u(num);
	delim = 1;
	nlencpy = nlen;
	if (num == 0)
		ft_putchar('0', printed);
	else
	{
		num = check_minus((long)n, printed);
		while (--nlen > 0)
			delim = delim * 10;
		while (nlencpy-- > 0)
		{
			ft_putchar(((num / delim) + '0'), printed);
			num = num - ((num / delim) * delim);
			delim = delim / 10;
		}
	}
}
