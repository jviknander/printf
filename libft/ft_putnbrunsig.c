/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsig.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:40:52 by jde-melo          #+#    #+#             */
/*   Updated: 2021/12/13 15:59:15 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbrunsign(unsigned int n)
{
	 int	digit;

	digit = 0;
	if (n > 9)
		digit =	ft_putnbr(n / 10);
	digit = ft_putchar((n % 10) + '0';
	return (digit);
}
