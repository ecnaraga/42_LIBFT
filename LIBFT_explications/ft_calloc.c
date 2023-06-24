/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:03:19 by galambey          #+#    #+#             */
/*   Updated: 2023/06/24 09:39:59 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Alloue la mémoire nécessaire pour un tableau de nmemb éléments
 *				 de taille size octets, et renvoie un pointeur vers la mémoire 
 *				 allouée. Cette zone est remplie avec des zéros. Si nmemb ou size
 *				 vaut 0, calloc() renvoie soit NULL, soit un pointeur unique qui
 *				 pourra être passé ultérieurement à free() avec succès. 
 *				 
 * Allocation dynamique : Oui
 *
 * Crash : Non
 *
 * Valeur de retour :
 * => Retour : tableau initialise a bzero
 *					  
 * => Retour = NULL : Si L'allocation a echoue ou si un des deux parametre = 0
 *
 * ************************************************************************* */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;
	size_t	check;

	check = nmemb * size;
	if (nmemb != 0 && check / nmemb != size)
		return (NULL);
	array = (void *)malloc(size * nmemb);
	if (!array)
		return (NULL);
	ft_bzero(array, (nmemb * size));
	return (array);
}
