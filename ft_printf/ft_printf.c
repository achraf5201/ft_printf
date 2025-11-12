/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bala <ael-bala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:01:10 by ael-bala          #+#    #+#             */
/*   Updated: 2025/11/06 15:29:11 by ael-bala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_format(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == 'c')
		count = ft_putchar(va_arg(args, int));
	else if (format == 's')
		count = ft_putstr(va_arg(args, char *));
	else if (format == 'i' || format == 'd')
		count = ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		count = ft_print_unsigned_int(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		count = ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == 'p')
		count = ft_print_ptr(va_arg(args, void *));
	else if (format == '%')
		count = ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == 0)
			return (-1);
		if (format[i] == '%' && format[i + 1] != 0)
		{
			i++;
			count += ft_format(format[i], args);
		}
		else if (format[i] != '%')
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
