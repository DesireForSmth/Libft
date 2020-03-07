/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:05:01 by mcarc             #+#    #+#             */
/*   Updated: 2019/09/16 17:11:54 by mcarc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*next_lst;

	lst = *alst;
	if (del)
	{
		while (lst)
		{
			next_lst = lst->next;
			lst->next = NULL;
			ft_lstdelone(&lst, del);
			lst = next_lst;
		}
	}
	*alst = NULL;
}
