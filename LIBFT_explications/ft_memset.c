/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 09:30:02 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 12:31:02 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Remplit les n premiers octets de la zone mémoire pointée par s
 *				 avec l'octet c
 *				 
 * Allocation dynamique : Non
 *
 * Crash :
 *
 * Valeur de retour :
 * => Retour =  pointeur sur s
 *					  
 * ************************************************************************* */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*cpy;

	i = 0;
	cpy = s;
	while (i < n)
	{
		cpy[i] = c;
		i++;
	}
	return (s);
}
