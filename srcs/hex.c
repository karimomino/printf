/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 07:36:35 by kamin             #+#    #+#             */
/*   Updated: 2021/11/01 21:15:25 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_hex_dec(unsigned int nbr, int *printed)
{
	unsigned int 	mod;
	int				i;
	int				j;
	char			hexa[100];
	char			temp[100];

	mod = 0;
	i = 0;
	j = -1;
	if (nbr == 0)
		ft_putchar('0', printed);
	else
	{
		while (nbr != 0 )
		{
			mod = nbr % 16;
			if (mod < 10)
				temp[i] = mod + '0';
			else
				temp[i] = mod + 'W';
			i++;
			nbr /= 16;
		}
		while (--i >= 0)
		{
			hexa[++j] = temp[i];
		}
		hexa[j + 1] = '\0';
		ft_putstr(hexa, printed);
	}
}

void	ft_hex_dec_upper(unsigned int nbr, int *printed)
{
	unsigned int	mod;
	int				i;
	int				j;
	char			hexa[100];
	char			temp[100];

	mod = 0;
	i = 0;
	j = -1;
	if (nbr == 0)
		ft_putchar('0', printed);
	else
	{
		while (nbr != 0 )
		{
			mod = nbr % 16;
			if (mod < 10)
				temp[i] = mod + '0';
			else
				temp[i] = mod + '7';
			i++;
			nbr /= 16;
		}
		while (--i >= 0)
			hexa[++j] = temp[i];
		hexa[j + 1] = '\0';
		ft_putstr(hexa, printed);
	}
}

void	ft_print_pointer(unsigned long nbr, int *printed)
{
		ft_putstr("0x", printed);
		ft_hex_dec_long(nbr, printed);
}

void	ft_hex_dec_long(unsigned long nbr, int *printed)
{
	unsigned int 	mod;
	int				i;
	int				j;
	char			hexa[100];
	char			temp[100];

	mod = 0;
	i = 0;
	j = -1;
	if (nbr == 0)
		ft_putchar('0', printed);
	else
	{
		while (nbr != 0 )
		{
			mod = nbr % 16;
			if (mod < 10)
				temp[i] = mod + '0';
			else
				temp[i] = mod + 'W';
			i++;
			nbr /= 16;
		}
		while (--i >= 0)
		{
			hexa[++j] = temp[i];
		}
		hexa[j + 1] = '\0';
		ft_putstr(hexa, printed);
	}
}
