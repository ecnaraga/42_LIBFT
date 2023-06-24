/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:26:52 by galambey          #+#    #+#             */
/*   Updated: 2023/05/14 21:14:24 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
 * 
 * Description : Examine les n premiers octets de la string pointée par s à la
 *				 recherche du caractère c, et renvoie un pointeur sur la
 *				 premiere occurence.
 *				 
 * Allocation dynamique : Non
 *
 * Valeur de retour :
 * => Retour : Pointeur sur la premiere occurence de c dans les n premiers 
 *			   octets de la string s 
 *					  
 * => Retour = NULL : c est absent des n premiers octets de la string s
 *
 * ************************************************************************* */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *) s + i);
		i++;
	}
	if (c == '\0')
		return ((char *) s + i);
	return (0);
}
