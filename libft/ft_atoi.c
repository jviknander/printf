/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:23:54 by jde-melo          #+#    #+#             */
/*   Updated: 2021/11/15 13:08:13 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

static int	ft_issignal(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	k;
	int	s;

	k = 1;
	while (ft_isspace(*str))
		str++;
	if (ft_issignal(*str))
	{
		if (*str == '-')
			k *= -1;
		str++;
	}
	s = 0;
	while (ft_isdigit(*str))
	{
		s = (s * 10) + (*str - 48);
		str++;
	}
	return (s * k);
}
/*
  {
	int n;
	int k;

	i = 0;
	k = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' 
				|| str[i] == '\r' || str [i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			k *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = (n * 10) + (str[i] - 48);
		i++;
	}
	return (n * k);
}
*/
