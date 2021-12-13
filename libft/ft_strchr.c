/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:13:14 by jde-melo          #+#    #+#             */
/*   Updated: 2021/11/14 16:20:54 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char )c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (0);
}
/*
*s
|_______________|
|_(char)c_______|
|_______________|
|_ou____c == 0__|
|_______________|
  retorna (char *)s


if one of these doesnt happen, it returns 0 because there's no c


int main()
{
	printf("%s", ft_strchr("hello0bye", 0));
	printf("%s", strchr("hello0bye", 0));
}
*/
