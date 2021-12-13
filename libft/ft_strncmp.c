/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:27:24 by jde-melo          #+#    #+#             */
/*   Updated: 2021/11/16 14:43:12 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str_1;
	unsigned char	*str_2;
	size_t			i;

	if (!s1 || !s2 || n == 0)
		return (0);
	str_1 = (unsigned char *)s1;
	str_2 = (unsigned char *)s2;
	i = 0;
	while (str_1[i] && (str_1[i] == str_2[i]) && i < n - 1)
		i++;
	return (str_1[i] - str_2[i]);
}
/*
int		main()
{
   char str1[] = "asdsa";
   char str2[] = "asdsaa";

   printf("\n%d \n",strncmp(str1, str2, 20));
   printf("%d \n",ft_strncmp(str1, str2, 20));

   printf("\n%d \n",strncmp(str1, str2, 21));
   printf("%d \n",ft_strncmp(str1, str2, 21));

   printf("\n%d \n",strncmp(str1, str2, 25));
   printf("%d \n",ft_strncmp(str1, str2, 25));

   printf("\n%d \n",strncmp(str1, str2, 19));
   printf("%d \n",ft_strncmp(str1, str2, 19));

   printf("\n%d \n",strncmp(str1, str2, 1));
   printf("%d \n",ft_strncmp(str1, str2, 1));

   printf("\n%d \n",strncmp(str1, str2, 0));
   printf("%d \n",ft_strncmp(str1, str2, 0));

   printf("\n%d \n",strncmp(str1, str2, 3));
   printf("%d \n",ft_strncmp(str1, str2, 3));

   printf("\n%d \n",strncmp(str1, str2, 2));
   printf("%d \n",ft_strncmp(str1, str2, 2));

   printf("\n%d \n",ft_strncmp(str1, str2, -1));
   printf("%d \n",ft_strncmp(str1, str2, -10));

   return(0);
}

   	n - 1 para ver o ultimo caracter antes do '/0'	

*/
