/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 10:25:05 by garance           #+#    #+#             */
/*   Updated: 2023/05/25 12:28:01 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Alloue et cree une copie de s sur laquelle on a applique la 
 *				 fonction f pointee en parametre.
 *				 s reste inchangee
 *				 cpy est le resultat de s dont les char ont ete passes dans f
 *				 
 * Allocation dynamique : Oui 1x, non free
 *
 * Crash : 
 *
 * Valeur de retour :
 * => Retour : pointeur sur la cpy de s iteree dans f
 *					  
 * => Retour = NULL : L allocation dynamique a echouee OU s n existe pas 
 *
 * ************************************************************************* */

char	*ft_strmapi(char const *s, char (*ft)(unsigned int, char))
{
	char	*mapi;
	int		i;

	if (!s)
		return (NULL);
	mapi = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (mapi == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mapi[i] = ft(i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}
