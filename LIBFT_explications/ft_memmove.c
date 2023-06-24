/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:23:25 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 10:13:12 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Copie dans dest les n premiers octets de la zone mémoire
 *				 pointée par s.
 *				 Le cas, ou les 2 zones memoires se chevauchent, est gere car on
 *				 compare les adresses des pointeurs src et dest :
 *				 Cas 1 : src < dest => src se trouve avant dest dans la memoire
 *				 Cas 2 : dest < src => src se trouve apres dest dans la memoire
 *				 
 * Allocation dynamique : Non
 *
 * Crash : 
 *
 * Valeur de retour :
 * => Retour = dest : pointeur sur dest
 *
 * ************************************************************************* */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0 && src != dest)
	{
		if (src < dest)
		{
			while (n > 0)
			{
				((char *) dest)[n - 1] = ((char *) src)[n - 1];
				n--;
			}
		}
		else if (src > dest)
		{
			while (n > 0)
			{
				((char *) dest)[i] = ((char *) src)[i];
				i++;
				n--;
			}
		}
	}
	return (dest);
}
