/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bala <ael-bala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:21:00 by ael-bala          #+#    #+#             */
/*   Updated: 2025/11/06 15:24:06 by ael-bala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_count_digit(long n, int base_len);
int	ft_printf(const char *format, ...);
int	ft_help(unsigned long n, char *base);
int	ft_print_hex(unsigned int n, char format);
int	ft_putnbr(int n);
int	ft_print_ptr(void *ptr);
int	ft_print_unsigned_int(unsigned int n);
int	ft_putchar(char c);
int	ft_putstr(char *s);

#endif
