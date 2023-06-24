/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:04:35 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 15:55:29 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Efface et free toute la liste a partir de l'element pointe.
 *				 lst contient l'adresse du pointeur de l'element.
 *				 Attention il faudra coder la fonction passee en parametre
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Non
 *
 * ************************************************************************* */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pos;

	if (!del || !lst || !*lst)
		return ;
	while (*lst != NULL)
	{
		pos = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = pos;
	}
}
