/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:13:25 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 17:55:17 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : ft_itoa() convertit un int en une chaine de caractere.
 *				 
 * Allocation dynamique : Oui
 *
 * Crash : Non
 *
 * Valeur de retour :
 * => Retour = NULL : L'allocation dynamique a echouee
 *					  
 * => Retour : Le resultat de la conversion
 *
 * ************************************************************************* */

char	*ft_itoa(int n);

/* *****************************************************************************
 * 
 * Description : ft_count() compte le nombre de chiffre present dans l'int passe
 *				 en parametre.
 *				 
 * Allocation dynamique : Non
 *
 * Valeur de retour :
 * => Retour : Nombre de chiffre necessaire pour ecrire l'int en parametre
 *
 * ************************************************************************* */

static unsigned int	ft_count(int n)
{
	unsigned int	count;
	unsigned int	nb;

	count = 0;
	nb = n;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		nb = -n;
	}
	while (nb >= 1)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

/* *****************************************************************************
 * 
 * Description : ft_itoa_recursive() ecrit dans la string s l'int i
 *				 ATTENTION : Elle ne termine pas la string par un '\0', c'est
 *				 ft_itoa qui le fera.
 *				 
 * Allocation dynamique : Non
 *
 * ************************************************************************* */

static void	ft_itoa_recursive(int n, char *s, int i)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		s[0] = '-';
		nb = -n;
	}
	if (nb <= 9)
		s[i] = nb + 48;
	else
	{
		ft_itoa_recursive(nb / 10, s, i - 1);
		s[i] = (nb % 10) + 48;
	}
}

char	*ft_itoa(int n)
{
	unsigned int	len;
	char			*s;

	len = ft_count(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	ft_itoa_recursive(n, s, len - 1);
	s[len] = '\0';
	return (s);
}
