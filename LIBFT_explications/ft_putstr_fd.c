/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:14:44 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 17:42:11 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Ecrit sur le file descriptor (fichier associe au fd) la string
 *				 pointee par s
 *				 fd = 0 => Entree standard
 *				 fd = 1 => Sortie standard (Ecrit sur le Terminal)
 *				 fd = 2 => Sortie erreur standard
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Non
 *
 * ************************************************************************* */

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
