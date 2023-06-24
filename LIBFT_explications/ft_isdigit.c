/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:13:02 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 17:57:16 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
 * 
 * Description : Teste si le caractere est un caractere numerique ou non
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Non
 *
 * Valeur de retour : 
 * => Retour = 0 : le caractere n'est pas numerique
 *					  
 * => Retour = 2048 ou != 0 : le caractere est numerique
 *
 * ************************************************************************* */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}
