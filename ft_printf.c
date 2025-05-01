/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:09:05 by miduarte          #+#    #+#             */
/*   Updated: 2025/05/01 12:50:43 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* if (arg == %)
	if (arg + 1 == s)
		ft_putstr
	else if (arg + 1 == d)
		ft_putnbr
 */

int	print_format (char format, va_list ap)
{
	int count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (format == 's')
		count += ft_putstring(va_arg(ap, char *));
	else if (format == 'd')
		count += ft_putnbr_base(va_arg(ap, int), 10);
	else if (format == 'i')
		count += ft_putnbr_base(va_arg(ap, int), 10);
	else if (format == 'x')
		count += ft_putnbr_base(va_arg(ap, int), 16);
	else if (format == 'X')
		count += ft_putnbr_baseUpper(va_arg(ap, int), 16);
	else if (format == '%')
		count += ft_putchar('%');
	else if (format == 'p')
		count += ft_putpointer(va_arg(ap, void*));
	else if (format == 'u')
		count += ft_putnbr_unsigned(va_arg(ap, int), 10);
	return (count);
}
 
 int	ft_printf (const char *string, ...)
 {
	 va_list ap;
	 int count;
	 int	i;
 
	 va_start(ap, string);
	 i = 0;
	 count = 0;
	 while (string[i] != '\0')
	 {
		 if (string[i] == '%')
		 {
			 print_format(string[i + 1], ap);
			 i++;
		 }
	 }
 }
 
 
 int main()
 {
	 int count;
 
	 count = ft_printf("Hello %s\n", "john");
	 ft_printf("The chars written are %d\n", count);
 }