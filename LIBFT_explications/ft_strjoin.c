/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:16:55 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 12:28:32 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * FT_STRJOIN
 * Description : Alloue et cree une nouvelle string qui est la concatenation des
 *				 2 strings passees en parametre
 *				 
 * Allocation dynamique : Oui x1, non free
 *
 * Crash : Non
 *
 * Valeur de retour :
 * => Retour : pointeur sur la nouvelle string (concatenation de s1 et s2)
 *					  
 * => Retour = NULL : 1. L'allocation dynamique a echouee
 *					  2. s1 et s2 n existent pas
 *
 * ************************************************************************* */

/* *****************************************************************************
 * FT_STRCAT
 * Description : Concatene a la fin de dest, src puis null terminate. Dest doit
 *				 etre suffisamment grande pour accueillir src apres son /0.
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Oui si dst OU src OU les deux n'existent pas
 *
 * Valeur de retour :
 * => Retour =  pointeur sur dest (qui resulte de la concatenation de dest + src)
 *					  
 * ************************************************************************* */

static void	ft_strcat(char *dst, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			len;
	char		*s;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		len = ft_strlen(s2);
	else if (!s2)
		len = ft_strlen(s1);
	else
		len = ft_strlen(s1) + ft_strlen(s2);
	s = (char *)malloc(sizeof(char) *(len + 1));
	if (!s)
		return (NULL);
	s[0] = '\0';
	if (s1)
		ft_strcat(s, s1);
	if (s2)
		ft_strcat(s, s2);
	return (s);
}
