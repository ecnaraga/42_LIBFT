/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:14:10 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 17:42:22 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Ecrit sur le file descriptor (fichier associe au fd) la string
 *				 pointee par s et retourne a la ligne
 *				 fd = 0 => Entree standard
 *				 fd = 1 => Sortie standard (Ecrit sur le Terminal)
 *				 fd = 2 => Sortie erreur standard
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Non
 *
 * ************************************************************************* */

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
