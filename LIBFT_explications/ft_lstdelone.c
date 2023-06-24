/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:01:26 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 15:50:11 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Efface le contenu de l'element pointe par lst et le free
 *				 Attention, il faudra penser creer la fonction pointee en
 *				 parametre
 *
 * Allocation dynamique : Non, elle permet de free
 *
 * Crash : Non
 *
 * ************************************************************************* */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
