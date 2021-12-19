/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:07:59 by jde-melo          #+#    #+#             */
/*   Updated: 2021/12/19 02:51:25 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

int	ft_putnbr_base(int n, char *base)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		count += ft_putchar('-');
		n = n * -1;
		count += ft_putnbr_base(n, base);
	}
	return (ft_putunbr_base((unsigned int)n, base));
}

int main ()
{
/*	//ft_putnbr_base(24, "0123456789");
	//printf("%d\n", 24 );
	//ft_printf("%d\n", 24);

	int i = 0;
	int j = 0;
	while (i == j)
	{
		i =printf("%d\n", i++);
		j = ft_printf("%d\n", j++);
		ft_printf("-----------------\n");
	}
	printf("%d\n", i);
	ft_printf("%d\n", j);
*/
	ft_printf("%d\n", -2147);
	printf("%d\n", -2147);

	
}
