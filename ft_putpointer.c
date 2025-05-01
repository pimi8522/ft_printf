/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 10:52:39 by miduarte          #+#    #+#             */
/*   Updated: 2025/05/01 12:40:19 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer (void *ptr)
{
	int			count = 0;
	uintptr_t	address;

	if (ptr == NULL)
	{
		count += ft_putstring("0x0");
		return (count);
	}
	count += ft_putstring("0x");
	address = (uintptr_t)ptr;
	count += ft_putnbr_unsigned(address, 16);
	return (count);
}