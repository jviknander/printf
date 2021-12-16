/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:27:57 by jde-melo          #+#    #+#             */
/*   Updated: 2021/12/16 13:19:23 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_type(char base, char type)
{
	char	*b;
	if (base == 16)
	{
		if (type == 1)
			b = "0123456789ABCDEF";
		else
			b = "01234567789abcdef";
	}
	else
		b = "0123456789";
	return(ft_strlen(&base));
}

int	ft_putunbr_base(int n, char  base, char type)
{
	int	count;

	count = 0;
	check_type(base, type);
	if (n >= ft_strlen(&base))
	{
		count += ft_putunbr_base(n / base, base, type);
		count += ft_putunbr_base(n % base, base, type);
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}
/*
int main ()
{

}*/

