/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:27:57 by jde-melo          #+#    #+#             */
/*   Updated: 2021/12/18 00:01:49 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	check_type(int base, int type)
{
	int	b;

	if (base == 16)
	{
		if (type == 1)
			b = ft_strlen("0123456789ABCDEF");
		else
			b = ft_strlen("0123456789abcdef");
	}
	else
		b = ft_strlen("0123456789");
	return (b);
}

int	ft_putunbr_base(unsigned int n, int  base, int type)
{
	int		count;

	count = 0;
	if (n >= check_type(base, type) && n > 15)
	{
		ft_putunbr_base(n / base, base, type);
		ft_putunbr_base(n % base, base, type);
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}

/*
int main ()
{
	ft_printf("%u\n", ft_putunbr_base(164684, 10, 0));
	ft_printf("%x\n", ft_putunbr_base(24, 16, 0));
	ft_printf("%X\n", ft_putunbr_base(24, 16, 1));
}*/
