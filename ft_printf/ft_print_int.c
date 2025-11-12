/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bala <ael-bala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:08:34 by ael-bala          #+#    #+#             */
/*   Updated: 2025/11/06 17:23:18 by ael-bala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	putnbr_help(long n)
{
	char	c;

	if (n >= 10)
		putnbr_help(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	ft_putnbr(int n)
{
	long	ln;
	int		count;

	ln = n;
	count = ft_count_digit(ln, 10);
	if (ln < 0)
	{
		write(1, "-", 1);
		ln = -ln;
	}
	putnbr_help(ln);
	return (count);
}
