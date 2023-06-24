/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 09:30:07 by galambey          #+#    #+#             */
/*   Updated: 2023/05/14 21:15:57 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Examine les n premiers octets de la zone mémoire pointée par s
 *				 à la recherche du caractère c, et renvoie un pointeur sur la
 *				 premiere occurence.
 *				 
 * Allocation dynamique : Non
 *
 * Valeur de retour :
 * => Retour : Pointeur sur la premiere occurence de c dans les n premiers 
 *			   octets de la zone s 
 *					  
 * => Retour = NULL : c est absent des n premiers octets de la zone s
 *
 * ************************************************************************* */

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
