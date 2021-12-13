/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:23:05 by jde-melo          #+#    #+#             */
/*   Updated: 2021/11/12 19:16:38 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}	
	new->next = *lst;
	*lst = new;
	return ;
}

//int main(int argc, char*= argv[])
//
//	t_list* lst = NULL;
//	ft_lstadd_front(&lst, 13);
//
//}
