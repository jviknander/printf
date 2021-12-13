/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:28:15 by jde-melo          #+#    #+#             */
/*   Updated: 2021/10/30 18:33:21 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ret;
	const unsigned char	*s;

	ret = dest;
	s = src;
	if (s < ret)
	{
		while (n--)
			ret[n] = s[n];
		return (ret);
	}
	else
		ft_memcpy(dest, src, n);
	return (ret);
}

/* 
{
	void	*ret;

	ret = dest;
	if (src < dest)
		while (n--)
			*(char *)(dest + n) = *(char *)(src + n);
	else 
		while (n--)
			*(char *)dest++ = *(char *)src++;
	return (ret);
}

----------------------------------
src < dest with overlap

[_____src_____]
	[___dest____]

src < dest no overlap

[_____src_____]
					[___dest____]

----------------------------------
src > dest with overlap -> memcpy

[_____dest_____]
	[___src____]


src > dest no  overlap -> memcpy (dest != src)

[_____dest_____]
					[___src____]
	
(src < dest) src é "maior" que dest, está à esquerda
(n--) como src é maior que dest, caso haja overlap, o n "anda para trás"
*/
