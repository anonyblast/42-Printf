/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:42:22 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/10/01 17:42:30 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digits(unsigned int n)
{
	if (n < 10)
		return (1);
	return (count_digits(n / 10) + 1);
}

static int	isnegative(unsigned int n)
{
	return (n < 0);
}

char	*ft_utoa(unsigned int n)
{
	char			*dest;
	size_t			digit;
	unsigned int	number;
	int				negative;

	number = n;
	negative = isnegative(n);
	if (negative)
		number = n * -1;
	digit = count_digits(number);
	dest = (char *) malloc((digit + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[digit] = '\0';
	while (digit--)
	{
		dest[digit] = (number % 10) + '0';
		number /= 10;
	}
	return (dest);
}
