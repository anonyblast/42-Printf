/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:38:24 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/10/01 17:38:25 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# define HEXALOW	"0123456789abcdef"
# define HEXAUPP	"0123456789ABCDEF"
# define FLAGS		"cspdiuxX%"

size_t	ft_strlen(const char *str);
char	*ft_itoa(int n);
char	*ft_utoa(unsigned int n);
char	*ft_strchr(const char *str, int c);
int		ft_printf(const char *format, ...);
int		ft_hex(unsigned long nb, char *base);
int		md_puthex(unsigned long nb, char format);
int		md_putchar(char str);
int		md_putstr(char *str);
int		md_putnbr(int nb);
int		md_unsigned_putnbr(unsigned int nb);

#endif