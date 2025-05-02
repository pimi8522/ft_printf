/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_baseUpper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:00:15 by miduarte          #+#    #+#             */
/*   Updated: 2025/05/02 14:28:43 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_baseUpper(int n, int base)
{
    int     count = 0;
    long    nb = n;
    char    *symbols = "0123456789ABCDEF";

    if (base < 2 || base > 16)
        return (0);
    if (nb < 0)
    {
        count += ft_putchar('-');
        nb = -nb;
    }
    if (nb >= base)
        count += ft_putnbr_baseUpper(nb / base, base);
    count += ft_putchar(symbols[nb % base]);
    return (count);
}