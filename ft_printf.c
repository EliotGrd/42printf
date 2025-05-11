/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 18:17:39 by egiraud           #+#    #+#             */
/*   Updated: 2025/05/12 01:25:48 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_cases(char specifier, va_list args)
{
	int count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar_c(va_arg(args, int));
	else if (specifier == 's')
			count += ft_putstr_c(va_arg(args, char *));
	else if (specifier == 'p')
			count += ft_putaddress(va_arg(args, void *));
	else if (specifier == 'd' || specifier == 'i')
			count += ft_putnbr_base(va_arg(args, int), "0123456789");
	else if (specifier == 'u')
			count += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (specifier == 'x')
			count += ft_putnbr_base(va_arg(args, int), "0123456789abcdef");
	else if (specifier == 'X')
			count += ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF");
	return (count);
}


int	ft_printf(const char *str, ...)
{
	va_list args;
	int count;
	int i;

	va_start(args, str)
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			count += ft_putchar_c(str[i]);
			i++;
		}
		else
		{
			if (str[i + 1] == '%')
				count += ft_putchar_c('%');
			else
				count += check_cases(str[i + 1], args);
			i++;
		}
	}
	va_end(args);
	return (count);
}
