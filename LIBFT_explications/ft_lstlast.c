/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 11:11:58 by garance           #+#    #+#             */
/*   Updated: 2023/05/25 15:44:03 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Amene au dernier element d'une liste
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Non
 *
 * Valeur de retour :
 * => Retour : dernier element de la liste
 *					 
 * => Retour = NULL : La liste n'existe pas
 * 
 * ************************************************************************* */

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (lst == NULL)
		return (NULL);
	temp = lst;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}
