/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:26:55 by jde-melo          #+#    #+#             */
/*   Updated: 2021/11/05 21:39:50 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			len_dst;
	size_t			len_src;
	unsigned int	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	if (len_dst > dstsize)
		return (len_src + dstsize);
	i = 0;
	while (src[i] && dstsize > i + len_dst + 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_src + len_dst);
}
/*
int main(void)
{
	int size;
	char *str;
	
	str = malloc(100);
	size = ft_strlcat(str, "asdasdasd", 10);
	size = ft_strlcat(str, "bdfbdfbdf", 20);
	printf("%s\n", str);
}

	i = 0;
	if (!dest[i++])
		return (0);
	j = 0;
	while (src[j] && j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	count = 0;
	while (src[count])
		count++;
	return (i + j)
 */
