/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykilicar <ykilicar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:31:53 by ykilicar          #+#    #+#             */
/*   Updated: 2023/02/03 17:51:56 by ykilicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *result)
{
	write(1, &c, 1);
	*result += 1;
}

void	ft_hex(unsigned int i, int *result)
{
	char	*main;

	main = "0123456789abcdef";
	if (i >= 16)
	{
		ft_hex(i / 16, result);
		ft_hex(i % 16, result);
	}
	else
		ft_putchar(main[i], result);
}

void	ft_hex2(unsigned int i, int *result)
{
	char	*main;

	main = "0123456789ABCDEF";
	if (i >= 16)
	{
		ft_hex2(i / 16, result);
		ft_hex2(i % 16, result);
	}
	else
		ft_putchar(main[i], result);
}

void	ft_pointer(unsigned long long i, int *result)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
	{	
		ft_pointer(i / 16, result);
		ft_pointer(i % 16, result);
	}
	else
		ft_putchar(base[i], result);
}

void	ft_u(unsigned int i, int *result)
{
	if (i >= 10)
	{
		ft_putnbr(i / 10, result);
		ft_putnbr(i % 10, result);
	}
	else
		ft_putchar(i + '0', result);
}
