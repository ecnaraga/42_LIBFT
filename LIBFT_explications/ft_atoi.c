/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:11:56 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 17:51:38 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
 * 
 * Description : La fonction atoi() convertit le début de la chaîne pointée par
 *				 nptr en entier de type int.
 *				 La string peut commencer par un nombre quelconque d'espaces ou
 *				 de caractères interprétés comme tels par isspace ('/t' a '\r').
 *				 Un signe éventuel « + » ou « - » peut suivre. Le reste de la
 *				 chaîne est converti en une valeur int, en s'arrêtant au premier
 *				 caractère qui ne soit pas un chiffre valide dans la base 10.
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Non
 *
 * Valeur de retour :
 * => Retour : le resultat de la conversion 
 *
 * ************************************************************************* */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	s;
	int	result;

	i = 0;
	s = 1;
	result = 0;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			s = -s;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * s);
}
