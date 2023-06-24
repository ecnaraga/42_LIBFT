/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 09:57:28 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 09:36:25 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Copie dans dest les n premiers octets de la zone mémoire
 *				 pointée par s.
 *				 A utiliser si on sait que les 2 zones memoires ne se
 *				 chevauchent pas
 *				 
 * Allocation dynamique : Non
 *
 * Valeur de retour :
 * => Retour =  NULL : dest ou src n'existe pas
 *					  
 * => Retour = dest : renvoie pointeur sur dest
 *
 * ************************************************************************* */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!(src || dest))
		return (NULL);
	while (i < n)
	{
		((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dest);
}
