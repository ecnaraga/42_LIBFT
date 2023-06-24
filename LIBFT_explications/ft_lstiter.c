/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:20:26 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 16:00:05 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Itere (Applique la fonction  f en parametre) sur le content de
 *				 chaque element de la liste
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Non
 *
 * ************************************************************************* */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!(lst || f))
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
