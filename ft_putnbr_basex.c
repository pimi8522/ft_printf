/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_basex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:42:47 by miduarte          #+#    #+#             */
/*   Updated: 2025/05/02 14:43:00 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_basex(unsigned int n, int base)
{
    int     count;
    char    *symbols = "0123456789abcdef";

    count = 0;
    if (base < 2 || base > 16)
        return (0);
    if (n >= (unsigned int)base)
        count += ft_putnbr_base(n / base, base);
    count += ft_putchar(symbols[n % base]);
    return (count);
}