/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:13:13 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 17:57:23 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
 * 
 * Description : Teste si le caractere est un caractere imprimable ou non
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Non
 *
 * Valeur de retour : 
 * => Retour = 0 : le caractere n'est pas imprimable
 *					  
 * => Retour = 16384 ou != 0 : le caractere est imprimable
 *
 * ************************************************************************* */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}
