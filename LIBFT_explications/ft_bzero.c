/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:34:16 by galambey          #+#    #+#             */
/*   Updated: 2023/05/14 19:39:11 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : La fonction bzero() met à 0 (octets contenant « \0 ») les n 
 *				 premiers octets du bloc pointé par s.
 *
 * Allocation dynamique : Non
 *				 				  
 * ************************************************************************* */

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}
