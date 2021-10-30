/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 07:36:35 by kamin             #+#    #+#             */
/*   Updated: 2021/10/30 08:16:05 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_hex_dec(int nbr, int *printed)
{
	int 	mod;
	int		i;
	char	hexa[9];

	mod = 0;
	i = 0;
	hexa[8] = '\0';
	while (hexa[i])
	{
		hexa[i] = '0';
		i++;
	}
	while (nbr != 0 )
	{
		mod = nbr % 16;
		if (mod < 10)
			hexa[i] = mod + '0';
		else
			hexa[i] = mod + 'W';
		i--;
		nbr /= 16;
	}
	ft_putstr(hexa, printed);
}

void	ft_hex_dec_upper(int nbr, int *printed)
{
	int 	mod;
	int		i;
	char	hexa[9];

	mod = 0;
	i = 0;
	hexa[8] = '\0';
	while (hexa[i])
	{
		hexa[i] = '0';
		i++;
	}
	while (nbr != 0 )
	{
		mod = nbr % 16;
		if (mod < 10)
			hexa[i] = mod + '0';
		else
			hexa[i] = mod + '7';
		i--;
		nbr /= 16;
	}
	ft_putstr(hexa, printed);
}

void	ft_print_pointer(int nbr, int *printed)
{
	//ft_putstr("")
	ft_hex_dec(nbr, printed);

}
