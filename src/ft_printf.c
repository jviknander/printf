/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:41:55 by jde-melo          #+#    #+#             */
/*   Updated: 2021/12/20 04:22:14 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	specifier(va_list args, const char *format)
{
	if (*format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (*format == 'p')
		return (ft_putstr("0x")
			+ un_base(va_arg(args, unsigned long long), "0123456789abcdef"));
	else if (*format == 'd' || *format == 'i')
		return (n_base(va_arg(args, int), "0123456789"));
	else if (*format == 'u')
		return (un_base(va_arg(args, unsigned int), "0123456789"));
	else if (*format == 'x')
		return (un_base(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (*format == 'X')
		return (un_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (*format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		counter;
	int		i;

	i = 0;
	counter = 0;
	va_start(args, format);
	while (format[i])
	{
		if (ft_strchr("%", format[i]))
		{
			counter += specifier(args, &format[++i]);
			i++;
		}
		else
		{
			counter += ft_putchar(format[i]);
			i++;
		}
		va_end(args);
	}
	return (counter);
}
/*
int main ()
{
	ft_printf("o meu: %s\n", "jgjg");
	printf("%s\n", "jgjg");
}
*/
/*	format − This is the string that contains the text to be written 
 *	to stdout. It can optionally contain embedded format tags that 
 *	are replaced by the values specified in subsequent additional 
 *	arguments and formatted as requested
 *
 *    va_start(ap, last_arg)
 * ap = This is the object of va_list and it will hold the information
 * needed to retrieve the additional arguments with va_arg.
 *
 *
 * last_arg − This is the last known fixed argument being passed to 
 * the function.
 *
*/
