/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:50:32 by miduarte          #+#    #+#             */
/*   Updated: 2025/04/30 12:03:22 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putstring(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
		count++;
	}
	return (count);
}
