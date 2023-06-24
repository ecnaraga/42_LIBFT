/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:14:56 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 12:30:35 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * FT_SPLIT
 * Description : Alloue et retourne un tableau de string obtenu en separant la
 *				 string pointee par s a l'aide du char c, utilise comme
 *				 delimitateur et termine le tableau par NULL
 *				 
 * Allocation dynamique : Oui autant de fois que de mots + 1, non free sauf si
 *						  une allocation echoue
 *
 * Crash : Non
 *
 * Valeur de retour :
 * => Retour =  pointeur sur le tableau de string (double pointeur)
 *					  
 * => Retour strs = NULL : Une allocation dynamique a echouee (tout
 *						   a ete free avant le retour) OU s n existe pas
 *
 * => Retour strs[0] = NULL : c n'existe pas et s est vide (strs a free dans
 *							  le main)
 *
 * ************************************************************************* */

/* *****************************************************************************
 * FT_COUNTWORDS
 * Description : compte le nombre de "mots" separes par le delimitateur c dans
 *				 la string s
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Oui si s n'existe pas > a proteger avant utilisation
 *
 * Valeur de retour :
 * => Retour =  Nombre de mots
 *					  
 * ************************************************************************* */

static int	ft_countwords(const char *s, char c)
{
	int	c_wd;
	int	i;

	c_wd = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			c_wd++;
			i++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (c_wd);
}

/* *****************************************************************************
 * FT_FREE_STRS
 * Description : free le tableau (strs) ainsi que les cases du double tableau
 *				 (strs[i]) precedemment allouees en cas d echec d'une allocation
 *				 dynamique
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Oui, a proteger avant utilisation
 *
 * Valeur de retour :
 * => Retour = NULL : Tout a ete free correctement
 *					  
 * ************************************************************************* */

static void	*ft_free_strs(char **strs, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free (strs[i]);
		i++;
	}
	free (strs);
	return (NULL);
}

/* *****************************************************************************
 * FT_SPLIT_STRS
 * Description : Alloue et remplit chaque case du tableau par les "mots" de la
 *				 string s 
 *				 
 * Allocation dynamique : Oui, autant de fois que de mots, non free sauf si une
 *						  allocation echoue
 *
 * Crash : Oui, a proteger avant utilisation
 *
 * Valeur de retour :
 * => Retour :  le tableau de string
 *					  
 * => Retour = NULL : Une allocation a echouee et tout a ete free correctement 
 *
 * ************************************************************************* */

char	**ft_split_strs(const char *s, char c, char **strs, int c_wd)
{
	int	j;
	int	c_lt;

	j = -1;
	while (*s && ++j < c_wd)
	{
		c_lt = 0;
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
		{
			c_lt++;
			s++;
		}
		if (c_lt > 0)
		{
			strs[j] = (char *)malloc(sizeof(char) * (c_lt + 1));
			if (strs[j] == NULL)
				return (ft_free_strs(strs, j));
			ft_strlcpy (strs[j], s - c_lt, c_lt + 1);
		}
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	int		c_wd;
	char	**strs;

	if (!s)
		return (NULL);
	if (!c && s[0] == '\0')
			c_wd = 0;
	else if (!c)
		c_wd = 1;
	else
		c_wd = ft_countwords(s, c);
	strs = (char **)malloc(sizeof(char *) * (c_wd + 1));
	if (strs == NULL)
		return (NULL);
	if (ft_split_strs(s, c, strs, c_wd) == NULL)
		return (NULL);
	strs[c_wd] = NULL;
	return (strs);
}
