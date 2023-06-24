/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:17:26 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 12:02:34 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Si la taille totale du buffer (size) est > 0, copie size -1
 *				 char dans dest et null terminate dest
 *
 * Exemple d 'appel : strlcpy(dest, src, sizeof(dest))
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Oui
 *
 * Valeur de retour :
 * => Retour =  ft_strlen(src)
 *					  
 * ************************************************************************* */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{	
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	}
	return (ft_strlen(src));
}
