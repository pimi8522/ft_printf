/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:03:52 by miduarte          #+#    #+#             */
/*   Updated: 2025/04/30 14:53:24 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_base(long	nb, int base)
{
	int count;
	char *symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	else if (nb < base)
		return (ft_putchar(symbols[nb]));
	else
	{
		count = ft_putnbr_base(nb / base, base);
		return (count + ft_putnbr_base(nb % base, base));
	}
	return (count);
}
