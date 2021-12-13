/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 23:20:56 by jde-melo          #+#    #+#             */
/*   Updated: 2021/11/05 21:44:55 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	digit;

	if (n < 0)
	{
		if (n == -2147483648)
			write(fd, "-2147483648", 11);
		else
		{
			ft_putchar_fd('-', fd);
			ft_putnbr_fd(n * (-1), fd);
		}
	}
	else if (n > 0)
	{
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		digit = (n % 10) + '0';
		ft_putchar_fd(digit, fd);
	}
	else
		ft_putchar_fd('0', fd);
}
