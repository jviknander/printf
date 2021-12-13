/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 23:08:36 by jde-melo          #+#    #+#             */
/*   Updated: 2021/11/16 14:52:32 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			size;
	size_t			i;

	sub = NULL;
	if (s)
	{
		if (ft_strlen(s) <= len)
			size = ft_strlen(s);
		else
			size = len;
		if (start >= ft_strlen(s))
			size = 0;
		sub = malloc(size + 1);
		if (!sub)
			return (NULL);
		i = 0;
		while (i < size)
			sub[i++] = s[start++];
		sub[i] = '\0';
	}
	return (sub);
}
/*
		if (s[start])
		{
			while (i < size)
				sub[i++] = s[start++];
			sub[i] = '\0';
		else
			return (0);

-----------------



size > ft_strlen(s)
   [___s___]
   		[___sub___] 
		start-->len


sub = substring will allocate the memmory(size) 
and if it exits it will fill it with '/0', so 
the 's' can be returned. if sub does not exist, 
return 0.



---------------

if (start < ft_strlen(s) - 1)



		 len >= ft_strlen(s)

		 ------------------
		 |    ____        |
		 |   |___|s       |
		 |----------------|sub
		 sub size = ft_strlen(s)

 
		 len < ft_strlen(s)
		 ------------------
		 |    ____        |
		 |   |___|sub     |
 		 |----------------|s
		 sub size = (max) len
 
*/
