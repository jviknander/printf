/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:28:11 by jde-melo          #+#    #+#             */
/*   Updated: 2021/11/14 16:19:52 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	n;

	n = ft_strlen(s) + 1;
	while (n--)
	{
		if (s[n] == (char )c)
			return ((char *)&s[n]);
	}
	return (0);
}
/*
int main()
{
	printf("%s", ft_strrchr("cico", 'c'));
}*/
