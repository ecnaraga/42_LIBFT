/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:20:52 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 12:20:18 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Cherche la premiere occurence de la string pointee par little
 *				 dans celle pointee par big su  les (len - 1) premiers char de
 *				 big.
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Oui
 *
 * Valeur de retour :
 * => Retour : pointeur sur la premiere occurence de little dans big
 *					  
 * => Retour = NULL : little n a pas ete trouvee dans les (len - 1) premiers
 *					  char de big 
 *
 * ************************************************************************* */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_little;
	size_t	len_big;

	i = -1;
	j = 0;
	if (!big && little && len == 0)
		return (0);
	len_little = ft_strlen(little);
	len_big = ft_strlen(big);
	if (len >= len_little)
	{
		while (++i < len_big && i <= len - len_little)
		{
			while (little[j] && big[i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return ((char *) big + i);
			j = 0;
		}
	}
	if (little[j] == '\0')
		return ((char *) big + i);
	return (0);
}
