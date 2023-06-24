/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:33:30 by garance           #+#    #+#             */
/*   Updated: 2023/05/25 15:19:20 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Ajoute un nouvel element a la fin de la liste chainee.
 *				 lst = l adresse du pointeur vers le premier element de la liste
 *				 
 * Allocation dynamique : non mais l element ajoute (new) a ete malloc
 *
 * Crash :
 *
 * ************************************************************************* */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (ft_lstsize(*lst) == 0)
	{
		*lst = new;
	}
	else
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}
