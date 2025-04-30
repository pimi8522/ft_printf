/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:09:05 by miduarte          #+#    #+#             */
/*   Updated: 2025/04/30 10:27:14 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* if (arg == %)
	if (arg + 1 == s)
		ft_putstr
	else if (arg + 1 == d)
		ft_putnbr
 */

int	print_format ()
 
 int	my_printf (const char *format, ...)
 {
	 va_list ap;
	 int count;
 
	 va_start(ap, format);
	 count = 0;
	 while (*format != '\0')
	 {
		 if (*format == '%')
			 print_format(format, ap);
	 }
 }
 
 int main()
 {
	 int count;
 
	 count = my_printf("Hello %s\n", "john");
	 my_printf("The chars written are %d\n", count);
 }