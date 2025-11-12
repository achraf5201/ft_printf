/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bala <ael-bala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:25:48 by ael-bala          #+#    #+#             */
/*   Updated: 2025/11/06 17:30:17 by ael-bala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	help(unsigned int n)
{
	char	c;

	if (n >= 10)
		help(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	ft_print_unsigned_int(unsigned int n)
{
	int	count;

	count = ft_count_digit(n, 10);
	help(n);
	return (count);
}
