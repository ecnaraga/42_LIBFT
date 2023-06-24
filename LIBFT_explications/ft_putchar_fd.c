/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:13:56 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 17:39:59 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Ecrit sur le file descriptor (fichier associe au fd) le char c
 *				 fd = 0 => Entree standard
 *				 fd = 1 => Sortie standard (Ecrit sur le Terminal)
 *				 fd = 2 => Sortie erreur standard
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Non
 *
 * ************************************************************************* */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
