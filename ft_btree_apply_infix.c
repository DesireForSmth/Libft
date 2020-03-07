/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_infix.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:10:55 by mcarc             #+#    #+#             */
/*   Updated: 2019/09/23 19:12:03 by mcarc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root && applyf)
	{
		ft_btree_apply_infix(root->left, applyf);
		applyf(root->item);
		ft_btree_apply_infix(root->right, applyf);
	}
}
