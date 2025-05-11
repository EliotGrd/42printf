/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 22:00:32 by egiraud           #+#    #+#             */
/*   Updated: 2025/05/12 01:25:42 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

//ft_puchar_c
int	ft_putchar_c(char c)
{
	return(write(1,&c,1));
}

//ft_putstr_c
int	ft_putstr_c(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		count += ft_putchar_c(*str);
		str++;
	}
	return (count);
}

//ft_putaddress
int	ft_putaddress(unsigned long long ptr)
{

}
