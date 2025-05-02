/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:09:24 by miduarte          #+#    #+#             */
/*   Updated: 2025/05/02 14:13:14 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#   define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

int ft_printf(const char *, ...);
int	ft_putchar (int	chr);
int	ft_putstring(char *s);
int ft_putnbr_base(int	n, int base);
int ft_putnbr_unsigned(uintptr_t	nb, int base);
int ft_putnbr_baseUpper(int	n, int base);
int	ft_putpointer (void *ptr);
int ft_putaddr(uintptr_t addr, int base);

#endif