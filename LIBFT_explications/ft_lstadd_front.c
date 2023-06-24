/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:39:18 by garance           #+#    #+#             */
/*   Updated: 2023/05/25 15:19:48 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Ajoute un nouvel element au debut de la liste chainee.
 *				 lst = l adresse du pointeur vers le premier element de la liste
 *				 
 * Allocation dynamique : non mais l element ajoute (new) a ete malloc
 *
 * Crash :
 *
 * ************************************************************************* */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
