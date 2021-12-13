/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:32:56 by jde-melo          #+#    #+#             */
/*   Updated: 2021/11/16 14:42:23 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*k;
	size_t			i;

	k = s;
	i = 0;
	while (i < n)
		k[i++] = c;
	return (s);
}
/*
[k[i]____] memória a ser preenchida, a partir do inicio 
*s(c)     n
*/
