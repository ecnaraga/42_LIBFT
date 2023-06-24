/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:25:19 by galambey          #+#    #+#             */
/*   Updated: 2023/05/14 21:13:36 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Examine les n derniers octets de la string pointée par s à la
 *				 recherche du caractère c, et renvoie un pointeur sur la
 *				 derniere occurence.
 *				 
 * Allocation dynamique : Non
 *
 * Valeur de retour :
 * => Retour : Pointeur sur la derniere occurence de c dans les n derniers 
 *			   octets de la string s 
 *					  
 * => Retour = NULL : c est absent des n derniers octets de la string s
 *
 * ************************************************************************* */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *) s + i);
	while (i > 0)
	{
		i--;
		if (s[i] == (char) c)
			return ((char *) s + i);
	}
	return (0);
}
