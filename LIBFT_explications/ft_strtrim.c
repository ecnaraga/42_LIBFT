/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 10:25:25 by garance           #+#    #+#             */
/*   Updated: 2023/05/25 12:39:41 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * FT_STRIM
 * Description : Alloue et renvoie une string s2 qui est la copie de s1 mais dont
 *				 les premiers et derniers char ont ete trimes/effaces s'ils
 *				 etaient present dans la string pointee par set   
 *				 
 * Allocation dynamique : Oui 1x, non free
 *
 * Crash : Non
 *
 * Valeur de retour :
 * => Retour : pointeur sur la chaine trimee
 *					  
 * => Retour = NULL : Si l'allocation dynamique echoue OU si s1 n'existe pas
 *
 * ************************************************************************* */

/* *****************************************************************************
 * FT_PRESENT_CHAR
 * Description : permet de savoir si c est un char present dans la chaine pointee
 *				 par set
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Oui
 *
 * Valeur de retour :
 * => Retour = 0 : le charactere est present dans set
 *
 * => Retour = 1 : le charactere est absent dans set
 *					  
 * ************************************************************************* */

static unsigned int	ft_present_char(char c, char const *set)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}

/* *****************************************************************************
 * FT_COUNT_DEB
 * Description : Renvoie le nombre de char consecutifs du debut de la string
 *				 pointee par s1 qui sont presents dans la string pointee par set
 *				 
 * Allocation dynamique : non
 *
 * Crash :
 *
 * Valeur de retour :
 * => Retour =  nombre de char consecutifs du debut de la string pointee par s1
 *				qui sont presents dans la string pointee par set
 *					  
 * ************************************************************************* */

static	unsigned int	ft_count_deb(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s1 && ft_present_char(s1[i], set) == 0)
	{
		count ++;
		i++;
	}
	return (count);
}

/* *****************************************************************************
 * FT_COUNT_END
 * Description : Renvoie le nombre de char consecutifs de la fin de la string
 *				 pointee par s1 qui sont presents dans la string pointee par set
 *				 
 * Allocation dynamique : non
 *
 * Crash :
 *
 * Valeur de retour :
 * => Retour =  nombre de char consecutifs de la fin de la string pointee par s1
 *				qui sont presents dans la string pointee par set
 *					  
 * ************************************************************************* */

static	unsigned int	ft_count_end(char const *s1, char const *set,
		unsigned int len)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while ((len - i - 1 != 0) && ft_present_char(s1[len - i - 1], set) == 0)
	{
		count ++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	count_deb;
	unsigned int	len_s1;
	char			*s2;
	unsigned int	len_s2;

	if (!s1)
		return (NULL);
	if (!set)
		s2 = ft_strdup(s1);
	else
	{
		len_s1 = ft_strlen(s1);
		count_deb = ft_count_deb(s1, set);
		if (count_deb == len_s1)
			len_s2 = 1;
		else
			len_s2 = len_s1 + 1 - count_deb - ft_count_end(s1, set, len_s1);
		s2 = (char *)malloc(sizeof(char) * len_s2);
		if (s2 == NULL)
			return (NULL);
		ft_strlcpy(s2, s1 + count_deb, len_s2);
	}
	return (s2);
}
