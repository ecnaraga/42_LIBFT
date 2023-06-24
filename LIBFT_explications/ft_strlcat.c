/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:17:10 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 11:46:22 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 *
 * Description : Concatene x char de src a la suite de dest et null terminate
 *				 A CONDITION que la taille totale du buffer (size) - 1 (pour
 *				 le \0) soit <= a la len du buffer (dest) ce qui permettra de null
 *				 terminate dest au minimum.
 *				 Si la taille totale du buffer est assez grande, on concatenera
 *				 de 0 a len(dest) - size - 1 char de src a la suite de dest + \0
 *				 selon la taille totale du buffer ET la len de src
 *				 ex : si len(src) < len(dest) - size - 1 => on concatenera len(src)
 *				 	  char de src + un \0, SINON ce sera (len(dest) - size - 1) char
 *				 de src + \0
 *				 
 * Exemple d'appel de strlcat : ft_strlcat(dst, src, sizeof(dst))
 *
 * Allocation dynamique : Non
 *
 * Crash : Oui si :
 *
 * Valeur de retour :
 * => Retour = ft_strlen(src) + size : Il n y a pas eu de concatenation
 *				Cas 1 : dst = NULL ET size = 0
 *				Cas 2 : tatille totale du buffer(dest) n'est pas assez grande
 *
 * => Retour =  ft_strlen(src) + ft_strlen(dest) avant concatenation : Il y a
 *					eu une concatenation
 *					  
 * ************************************************************************* */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (dst == NULL && size == 0)
		return (ft_strlen(src) + size);
	len = ft_strlen(dst);
	if (len > size - 1 || size == 0)
		return (ft_strlen(src) + size);
	while (src[i] && len + i < size - 1)
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (ft_strlen(src) + len);
}
