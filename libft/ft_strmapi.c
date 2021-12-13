/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 23:16:37 by jde-melo          #+#    #+#             */
/*   Updated: 2021/11/05 21:39:14 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	int		i;
	int		size;

	if (!s || !f)
		return (0);
	size = ft_strlen(s);
	mapi = malloc(size + 1);
	if (!mapi)
		return (NULL);
	i = -1;
	while (s[++i])
		mapi[i] = f(i, s[i]);
	mapi[i] = 0;
	return (mapi);
}
