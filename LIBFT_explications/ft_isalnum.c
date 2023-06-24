/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:12:13 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 17:57:55 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
 * 
 * Description : Teste si le caractere est un caractere alphanumerique ou non
 *				 
 * Allocation dynamique : Non
 * Crash :; Non
 * Valeur de retour : 
 * => Retour = 0 : le caractere n'est pas alphanumerique
 *					  
 * => Retour = 8 ou != 0 : le caractere est alphanumerique
 *
 * ************************************************************************* */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
		return (8);
	return (0);
}
