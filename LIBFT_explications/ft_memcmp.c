/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:52:14 by galambey          #+#    #+#             */
/*   Updated: 2023/05/14 21:26:47 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : La fonction memcmp() compare les n premiers octets des zones 
 *				 mémoire s1 et s2. Elle renvoie un entier inférieur, égal, ou
 *				 supérieur à zéro, si s1 est respectivement inférieure, égale ou
 *				 supérieur à s2. Elle s'arrete a la premiere difference.
 *				 
 * Allocation dynamique : Non
 *
 * Valeur de retour :
 * => Retour = 0 : les n premiers octets de s1 sont egaux a ceux de s2
 *					  
 * => Retour > 0 : les n premiers octets de s1 sont superieurs a ceux de s2
 *
 * => Retour < 0 : les n premiers octets de s1 sont inferieurs a ceux de s2
 *
 * ************************************************************************* */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1 || s2) && ((unsigned char *) s1)[i] == ((unsigned char *)
				s2)[i] && i + 1 < n)
		i++;
	if (i == n)
		return (0);
	else
		return (((unsigned char *) s1)[i] - ((unsigned char *)s2)[i]);
}
