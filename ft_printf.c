/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:41:55 by jde-melo          #+#    #+#             */
/*   Updated: 2021/12/15 13:16:35 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int specifier(va_list args, const char *format)
{
	if (*format == 'c')
		return (ft_putchar(va_arg(args, char)));
	else if (*format == 's')
		return (ft_putstr(va_arg(args, char *));
	else if (*format == 'p')
		return (ft_putunbr_base(va_arg(args, ));
	else if (*format == 'd' || *format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (*format == 'u')
		return (ft_putunbr_base(va_arg(args, unsigned int), 10, 1));
	else if (*format == 'x')
		return (ft_putunbr_base(va_arg(args, int), 16, 1));
	else if (*format == 'X')
		return (ft_putunbr_base(va_arg(args, int), 16, 0));
	else if (*format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			counter = specifier(args, format);
		}
		else
			counter = write(1, format, 1);
			i++;
	}
	va_end(args);
	return (counter);
}

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
