/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:12:30 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 17:56:20 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
 * 
 * Description : Teste si le caractere est un caractere alphabetique ou non
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Non
 *
 * Valeur de retour : 
 * => Retour = 0 : le caractere n'est pas alphabetique
 *					  
 * => Retour = 1024 ou != 0 : le caractere est alphabetique
 *
 * ************************************************************************* */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1024);
	return (0);
}
