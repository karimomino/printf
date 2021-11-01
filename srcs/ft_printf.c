/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:59:18 by kamin             #+#    #+#             */
/*   Updated: 2021/11/01 20:54:25 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_check_flags(const char *flags, va_list params, int *printed)
{
	const char *flag = flags + 1;
	if (*flag == 'c')
		ft_putchar(va_arg(params, int), printed);
	else if (*flag == 's')
		ft_putstr(va_arg(params, char *), printed);
	else if (*flag == 'p')
		ft_print_pointer(va_arg(params, unsigned long), printed);
	else if (*flag == 'd')
		ft_putnbr(va_arg(params, int), printed);
	else if (*flag == 'i')
		ft_putnbr(va_arg(params, int), printed);
	else if (*flag == 'u')
		ft_putnbr_u(va_arg(params, unsigned int), printed);
	else if (*flag == 'x')
		ft_hex_dec(va_arg(params, int), printed);
	else if (*flag == 'X')
		ft_hex_dec_upper(va_arg(params, int), printed);
	else if (*flag == '%')
		ft_putchar('%', printed);
}

int	ft_printf(const char *flags, ...)
{
	int		printed;
	va_list	params;

	va_start(params, flags);
	printed = 0;
	while(*flags != '\0')
	{
		if (*flags != '%')
		{
			write(1, flags, 1);
			printed += 1;
		}
		else
		{
			ft_check_flags(flags, params, &printed);
			flags++;
		}
		flags++;
	}
	va_end(params);
	return (printed);
}

// int main()
// {
// 	//printf("%d\n", ft_printf("a%%a\n"));
// 	printf("%d\n", ft_printf(" %p %p ", 0, 0));
// 	printf("%d\n", printf(" %p %p ", 0, 0));
// 	return (0);
// }
