/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-vr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:47:28 by marde-vr          #+#    #+#             */
/*   Updated: 2023/11/08 00:46:04 by marde-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(const char c);
int	ft_putstr(const char *s);
int	ft_putptr(long unsigned int ptr);
int	ft_putnbr(long nbr);
int	ft_puthexa(unsigned int nbr, char c);
int	ft_puthexa_ptr(long unsigned int ptr);

int	ft_printf(const char *s, ...);
int	ft_print_arg(va_list args_lst, char c);

#endif
