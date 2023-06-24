/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:49:51 by garance           #+#    #+#             */
/*   Updated: 2023/05/25 15:37:29 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : ft_strlen pour liste, compte le nombre d element present dans
 *				 1 liste chainee
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Non
 *
 * Valeur de retour :
 * => Retour = nombre d'elements dans la liste
 *					  
 * ************************************************************************* */

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count ++;
		lst = lst -> next;
	}
	return (count);
}
