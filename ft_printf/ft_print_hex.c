/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bala <ael-bala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:33:54 by ael-bala          #+#    #+#             */
/*   Updated: 2025/11/06 15:32:59 by ael-bala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_help(unsigned long n, char *base)
{
	int	count;

	count = 1;
	if (n >= 16)
		count += ft_help(n / 16, base);
	ft_putchar(base[n % 16]);
	return (count);
}

int	ft_print_hex(unsigned int n, char format)
{
	int				count;
	unsigned long	ln;
	char			*base;

	ln = n;
	count = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (ln == 0)
		return (ft_putchar('0'));
	count = ft_help(ln, base);
	return (count);
}
