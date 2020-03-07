/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:30:18 by mcarc             #+#    #+#             */
/*   Updated: 2019/09/23 18:58:25 by mcarc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	void *tmp;

	if (size > size + 1)
		return (NULL);
	tmp = ft_memalloc(size + 1);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, size + 1);
	return (tmp);
}
