/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:29:18 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 16:06:56 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Alloue et cree une copie de la liste pointee par lst et itere
 *				 (Applique la fonction pointee par f en parametre) sur le
 *				 content de chaque element de la nouvelle liste.
 *				 Si 1 allocation echoue, free toute la noubvelle liste
 *				 
 * Allocation dynamique : Oui autant de fois qu il y a d elements dans la liste
 *
 * Crash : 
 *
 * Valeur de retour :
 * => Retour : la nouvelle liste
 *					  
 * => Retour = NULL : Une allocation dynamique a echouee ou lst n'existe pas 
 *
 * ************************************************************************* */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{	
		elem = ft_lstnew(f(lst->content));
		if (!elem)
			ft_lstclear(&new_lst, del);
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
