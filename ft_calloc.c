/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <galambey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:03:19 by galambey          #+#    #+#             */
/*   Updated: 2023/05/10 10:16:30 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (size != 0 && (nmemb > ((sizeof(char) * 2147483424) / size)))
		return (NULL);
	array = (void *)malloc(size * nmemb);
	if (!array)
		return (NULL);
	ft_bzero(array, (nmemb * size));
	return (array);
}
