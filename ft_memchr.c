/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <galambey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 09:30:07 by galambey          #+#    #+#             */
/*   Updated: 2023/05/10 10:18:58 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*cpy;
	size_t		i;

	cpy = s;
	i = 0;
	while (i < n)
	{
		if (cpy[i] == (char) c)
			return ((void *) s + i);
		i++;
	}
	return (NULL);
}
