/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_insert_data.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:15:11 by mcarc             #+#    #+#             */
/*   Updated: 2019/09/23 19:15:46 by mcarc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	if (cmpf)
	{
		if (!(*root))
			*root = ft_btree_create_node(item);
		else if (cmpf(item, (*root)->item) < 0)
			ft_btree_insert_data(&(*root)->left, item, cmpf);
		else
			ft_btree_insert_data(&(*root)->right, item, cmpf);
	}
}
