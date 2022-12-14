/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:34:33 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/10/01 17:34:36 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	md_putchar(char str)
{
	write(1, &str, 1);
	return (1);
}

int	md_putstr(char *str)
{
	int	len;

	if (!str)
		return (md_putstr("(null)"));
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}

int	md_putnbr(int nb)
{
	int		size;
	char	*str;

	str = ft_itoa(nb);
	size = md_putstr(str);
	free (str);
	str = NULL;
	return (size);
}

int	md_unsigned_putnbr(unsigned int nb)
{
	int		size;
	char	*str;

	str = ft_utoa(nb);
	size = md_putstr(str);
	free (str);
	str = NULL;
	return (size);
}

int	md_puthex(unsigned long nb, char format)
{
	if (format == 'x')
		return (ft_hex(nb, HEXALOW));
	else if (format == 'X')
		return (ft_hex(nb, HEXAUPP));
	else if (format == 'p')
	{
		if (!nb)
			return (md_putstr("(nil)"));
		return (md_putstr("0x") + ft_hex(nb, HEXALOW));
	}
	return (0);
}
