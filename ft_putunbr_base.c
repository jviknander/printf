/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 12:21:25 by jde-melo          #+#    #+#             */
/*   Updated: 2021/12/20 01:22:03 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	un_base(unsigned long long n, char *base)
{
	int				count;
	unsigned long	size;

	count = 0;
	size = ft_strlen(base);
	if (n >= size)
	{
		count += un_base(n / size, base);
		count += ft_putchar(base[n % size]);
	}
	else
		count += ft_putchar(base[n]);
	return (count);
}

/*
int main (void)
{
	ft_printf("%u\n", ft_putunbr_base(164684, 10, 0));
	
	printf("%x\n", ft_putunbr_base(24, 16, 0));
	ft_printf("%x\n", ft_putunbr_base(24, 16, 0));
	
	printf("%i\n", 0x24e);
	int a = printf("%x\n", 24);
	int t = ft_printf("%x\n", 24);

	printf("%d\n", a);
	ft_printf("%d\n", t);

	ft_printf("%X\n", ft_putunbr_base(24, 16, 1));

	//#print the pointer adress %p
	//%p = 0x%	
	ft_putunbr_base("%p\n", "0123456789");
	
	int	*ptr;

	printf("%p\n", ptr);
	ft_printf("%p\n", ptr);

}
*/
