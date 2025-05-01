/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_baseUpper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:00:15 by miduarte          #+#    #+#             */
/*   Updated: 2025/04/30 15:00:43 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_baseUpper(long	nb, int base)
{
	int count;
	char *symbols;

	count = 0;
	symbols = "0123456789ABCDEF";
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	else if (nb < base)
		return (ft_putchar(symbols[nb]));
	else
	{
		count = ft_putnbr_baseUpper(nb / base, base);
		return (count + ft_putnbr_baseUpper(nb % base, base));
	}
	return (count);
}