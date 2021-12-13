/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <jde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:26:07 by jde-melo          #+#    #+#             */
/*   Updated: 2021/10/30 22:16:31 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ret;
	const unsigned char	*s;
	int					i;

	if (!src && !dest)
		return (0);
	s = src;
	ret = dest;
	i = 0;
	while (n-- != 0)
	{
		ret[i] = s[i];
		i++;
	}
	return (dest);
}
/*

src < dest sem overlap
[_____src_____]

					[_____dest_____]


src > dest sem overlap
[_____dest_____]

					[_____src_____]

*/
