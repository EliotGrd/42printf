/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 22:33:30 by egiraud           #+#    #+#             */
/*   Updated: 2025/05/12 01:07:51 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINT_F

#include <unistd.h>
#include <stdarg.h>

int		ft_printf(const char *format);
int		ft_putnbr_unsigned(unsigned int nb, char *base);
int		ft_putnbr_base(int nb, char *base);
int		ft_putchar_c(int n);
int		ft_putstr_c(char *);
int 	ft_putaddress(void *);
int		ft_strlen(char *str);


#endif
