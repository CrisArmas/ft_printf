/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:14:20 by carmas            #+#    #+#             */
/*   Updated: 2023/07/13 15:02:03 by carmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pconvert(unsigned long int nbr, int *len)
{
	if (!nbr)
	{
		*len = *len + ft_putstr("(nil)");
		return ;
	}
	*len = *len + ft_putchar('0') + ft_putchar('x');
	ft_putnbr_base(nbr, HEX_L, len);
}

void	ft_putnbr_base(unsigned long int nbr, char *base, int *len)
{
	if (nbr >= 16)
	{
		ft_putnbr_base(nbr / 16, base, len);
		ft_putnbr_base(nbr % 16, base, len);
	}
	if (nbr < 16)
		*len = *len + ft_putchar(base[nbr]);
}

static int	ft_intlen(long int num)
{
	int			intlen;

	if (num == 0)
		return (1);
	intlen = 1;
	if (num < 0)
	{
		num = -num;
		intlen++;
	}
	while (num >= 10)
	{
		num = num / 10;
		intlen++;
	}
	return (intlen);
}

void	ft_itoa(long int n, int *len)
{
	char		*str;
	int			intlen;

	intlen = ft_intlen(n) - 1;
	str = (char *)malloc(intlen + 2);
	if (str == NULL)
		return ;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[intlen + 1] = '\0';
	while (n >= 10)
	{
		str[intlen] = (n % 10) + '0';
		n = n / 10;
		intlen --;
	}
	str[intlen] = n + '0';
	intlen = ft_putstr(str);
	free(str);
	*len = *len + intlen;
}
