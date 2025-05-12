/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:35:01 by egiraud           #+#    #+#             */
/*   Updated: 2025/05/12 01:11:34 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned_base(unsigned int nb, char *base)
{
	int	count;
	unsigned int	baselen;

	baselen = ft_strlen(base);
	count = 0;
	if (nb <= baselen)
		count += ft_putchar_c(nb);
	else
	{
		ft_putunsigned_base(nb / baselen, base);
		ft_putunsigned_base(nb % baselen, base);
	}
	return (count);
}

int	ft_putnbr(int nb)
{
	long nbr;
	int count;

	count = 0;
	nbr = nb;
	if (nbr < 0)
	{
		count += ft_putchar_c('-');
		nbr = -nbr;
	}
	if (nbr <= 10)
	{
		count += ft_putchar_c(nbr);
	}
	else 
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	return (count);
}

