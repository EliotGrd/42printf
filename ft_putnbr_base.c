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

static int	count_digits(int nb, int baselen)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	if (nb < baselen)
		return (count + 1);
	while (nb)
	{
		nb /= baselen;
		count++;
	}
	return (count)
}

int	ft_putnbr_unsigned(unsigned int nb)
{
	int	baselen;
	unsigned int nblen;

	nblen = count_digits(nb, baselen);
	baselen = ft_strlen(base);
	if (nb <= baselen)
	{
		ft_putchar_c(base[nb]);
	}
	else
	{
		ft_putnbr_unsigned(nb / baselen, base);
		ft_putnbr_unsigned(nb % baselen, base);
	}

}

int	ft_putnbr_base(int nb, char *base)
{
	long nbr;
	unsigned int nblen;
	int	baselen;

	nbr = nb;
	baselen = ft_strlen(base);
	nblen = count_digits(nb, baselen);
	if (nbr < 0)
	{
		ft_putchar_c('-');
		nbr = -nbr;
	}
	if (nbr <= baselen)
	{
		ft_putchar_c(base[nbr]);
	}
	else 
	{
		ft_putnbr_base(nbr / baselen, base);
		ft_putnbr_base(nbr % baselen, base);
	}
	return (nblen)
}

