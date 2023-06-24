/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:12:47 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 17:56:44 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
 * 
 * Description : Teste si le caractere est un caractere de la table ascii (0 a 
 *				 127) ou non
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Non
 *
 * Valeur de retour : 
 * => Retour = 0 : le caractere n'est pas de la table ascii (0 a 127)
 *					  
 * => Retour = 1 ou != 0 : le caractere est de la table ascii (0 a 127)
 *
 * ************************************************************************* */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
