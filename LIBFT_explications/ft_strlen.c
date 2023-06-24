/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:20:24 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 12:05:50 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Retourne la longueur de la string (sans compter le \0 de la fin)
 *				 pointee par s
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Oui si s n'existe pas car impossible avec size_t de mettre un code
 *		   erreur vu que toutes les valeurs a partir de 0 (SIZE_MIN) a SIZE_MAX
 *		   peuvent correspondre a une longueur de string valide
 *
 * Valeur de retour :
 * => Retour =  Nombre de char contenu dans la string sans le \0
 *					  
 * ************************************************************************* */

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
