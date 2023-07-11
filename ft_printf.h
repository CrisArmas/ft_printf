/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 16:47:28 by carmas            #+#    #+#             */
/*   Updated: 2023/07/11 15:30:42 by carmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include <limits.h>

# define HEX_L "0123456789abcdef"
# define HEX_U "0123456789ABCDEF"

int			ft_putchar(char c);
int			ft_putstr(const char *str);
int			ft_printf(const char *format, ...);
void	ft_itoa(long int n, int *len);
void	ft_check_format(va_list arg, char fornat, int *len);
void	ft_putnbr_base(unsigned long int nbr, char *base, int *len);
void	ft_pconverter(unsigned long int nbr, int *len);

#endif
