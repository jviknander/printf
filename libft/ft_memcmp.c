/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:43:14 by jde-melo          #+#    #+#             */
/*   Updated: 2021/11/16 14:41:56 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str_1;
	unsigned char	*str_2;
	size_t			i;

	str_1 = (unsigned char *)s1;
	str_2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (str_1[i] == str_2[i] && i < n)
	{
		i++;
		if (i == n)
			return (0);
	}
	return (str_1[i] - str_2[i]);
}
/*
 * strs are identical
 * [___str_1___]
 *
 * [___str_2___]

 * strs are not identical
 * [str_1___]
 *
 * [______str_2]
*/
