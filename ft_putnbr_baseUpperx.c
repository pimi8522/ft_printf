/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_baseUpperx.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:00:15 by miduarte          #+#    #+#             */
/*   Updated: 2025/05/02 14:44:01 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_baseUpperx(unsigned int n, int base)
{
    int     count;
    char    *symbols = "0123456789ABCDEF";

    count = 0;
    if (base < 2 || base > 16)
        return (0);
    if (n >= (unsigned int)base)
        count += ft_putnbr_base(n / base, base);
    count += ft_putchar(symbols[n % base]);
    return (count);
}