/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 06:09:24 by jde-melo          #+#    #+#             */
/*   Updated: 2021/11/16 14:49:29 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	delimiter_counter(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i])
			i++;
		count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**jarsenio;
	int		j;
	int		end;
	int		start;

	if (!s)
		return (0);
	jarsenio = malloc(sizeof(char *) * delimiter_counter(s, c) + 1);
	if (!jarsenio)
		return (0);
	start = 0;
	end = 0;
	j = 0;
	while (s[end])
	{
		while (s[end] == c && s[end])
			end++;
		start = end;
		while (s[end] != c && s[end])
			end++;
		if (end > start)
			jarsenio[j++] = ft_substr(s, start, end - start);
	}
	jarsenio[j] = NULL;
	return (jarsenio);
}
/*
//https://www.youtube.com/watch?v=VmgKryu4__k

int main ()
{
	char	**s;
	int		i;

	s = ft_split("split  ||this|for|me|||||!|", '|');
	i = -1;
	while (s[++i])
		printf("%s\n", s[i]);
	return (0);
}
*/
