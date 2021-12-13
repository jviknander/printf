/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:25:36 by jde-melo          #+#    #+#             */
/*   Updated: 2021/10/30 16:16:03 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- != 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
	}
	return (0);
}

/*

{
	int				i;
	unsigned char	*str;

	str = s;
	if (!c || !str)
		return (0);
	i = 0;
	while (i < n)
	{
		if  (str[i] == c)
			return ((unsigned char *)c);
		i++;
	}
	return (0);
}

*(unsigned char *)s
   [____c_______]
        (unsigned char *)s  -> to return
    0 <----------------- n-- != 0


*/
