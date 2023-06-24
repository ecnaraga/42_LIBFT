/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:16:21 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 12:28:51 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Alloue et cree une copie de la string pointee par s
 *				 
 * Allocation dynamique : Oui, non free
 *
 * Crash : Oui si s n'existe pas, a proteger avant utilisation
 *
 * Valeur de retour :
 * => Retour : pointeur sur la copie de s
 *					  
 * => Retour = NULL : L'allocation dynamique a echouee
 *
 * ************************************************************************* */

char	*ft_strdup(const char *s)
{
	char		*cpy;
	int			i;

	i = 0;
	cpy = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (cpy == NULL)
		return (NULL);
	while (s[i])
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
