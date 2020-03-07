/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:57:03 by mcarc             #+#    #+#             */
/*   Updated: 2019/09/16 13:48:40 by mcarc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *tmp;

	if (size < size + 1)
	{
		tmp = (void *)malloc(size);
		if (!tmp)
			return (NULL);
		ft_bzero(tmp, size + 1);
		return (tmp);
	}
	return (0);
}
