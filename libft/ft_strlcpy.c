/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:27:05 by jde-melo          #+#    #+#             */
/*   Updated: 2021/10/30 22:19:51 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t			len_src;
	unsigned int	i;

	len_src = ft_strlen(src);
	if (!dstsize)
		return (len_src);
	i = 0;
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}
/*
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (src[count])
		count++;
	if (dstsize != 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] == src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (count);
}	
*/
