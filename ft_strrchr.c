/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:57:17 by mcarc             #+#    #+#             */
/*   Updated: 2019/09/08 19:04:53 by mcarc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *tmp;

	tmp = (char *)s;
	while (*tmp)
		tmp++;
	while (tmp >= s)
	{
		if (*tmp == c)
			return (tmp);
		tmp--;
	}
	return (NULL);
}
