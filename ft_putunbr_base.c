/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 12:21:25 by jde-melo          #+#    #+#             */
/*   Updated: 2021/12/19 02:33:00 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_base(unsigned int n, char *base)
{
	int	count;
	unsigned int	size;

	count = 0;
	size = ft_strlen(base);
	if (n >= size)
	{
		count += ft_putunbr_base(n / size, base);
		count += ft_putchar(base[n % size]);
	}
	else
		count += ft_putchar(base[n]);
	return (count);
}

/*
int main ()
{
	//ft_printf("%u\n", ft_putunbr_base(164684, 10, 0));
	
//	printf("%x\n", ft_putunbr_base(24, 16, 0));
//	ft_printf("%x\n", ft_putunbr_base(24, 16, 0));
	
	//printf("%i\n", 0x24e);
	int a = printf("%x\n", 24);
	int t = ft_printf("%x\n", 24);

	printf("%d\n", a);
	ft_printf("%d\n", t);
	


	//ft_printf("%X\n", ft_putunbr_base(24, 16, 1));
}*/
