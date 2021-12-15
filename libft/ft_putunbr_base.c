/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:27:57 by jde-melo          #+#    #+#             */
/*   Updated: 2021/12/15 12:34:11 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr_base(unsigned int n, char base, int type)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count += ft_putunbr_base(n / 10);
		count += ft_putunbr_base (n % 10);
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}

int main ()
{

}

