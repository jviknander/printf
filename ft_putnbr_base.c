/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:07:59 by jde-melo          #+#    #+#             */
/*   Updated: 2021/12/17 12:18:46 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

int	ft_putnbr_base(int n, char base, char type)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		count += ft_putchar('-');
		n = n * (-1);
		return (count);	
	}
	else
		return (ft_putunbr_base(n, base, type));
}
/*
int main ()
{
	ft_putnbr_base(-656166, 10, 1);
	ft_printf(%u\n, )
}*/
