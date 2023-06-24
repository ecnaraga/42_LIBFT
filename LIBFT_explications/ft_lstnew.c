/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:20:47 by garance           #+#    #+#             */
/*   Updated: 2023/05/25 15:14:50 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Alloue et cree un nouvel element de type t_list qui contient
 *				 dans son content ce qui a ete passe en parametre.
 *				 Il n est pour l instant relie a aucune liste chainee
 *				 
 * Allocation dynamique : Oui 1x
 *
 * Crash : Non
 *
 * Valeur de retour :
 * => Retour : le nouvel element de type t_list
 *					  
 * => Retour = NULL : L'allocation a echouee
 *
 * ************************************************************************* */

t_list	*ft_lstnew(void *content)
{
	t_list	*temp;

	temp = NULL;
	temp = malloc(sizeof(t_list));
	if (temp == NULL)
		return (NULL);
	temp -> content = content;
	temp -> next = NULL;
	return (temp);
}
