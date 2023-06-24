/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garance <garance@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:14:29 by galambey          #+#    #+#             */
/*   Updated: 2023/05/25 17:48:43 by garance          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *****************************************************************************
 * 
 * Description : Ecrit sur le file descriptor (fichier associe au fd) l'int n
 *				 sous forme de string
 *				 fd = 0 => Entree standard
 *				 fd = 1 => Sortie standard (Ecrit sur le Terminal)
 *				 fd = 2 => Sortie erreur standard
 *				 
 * Allocation dynamique : Non
 *
 * Crash : Non
 *
 * ************************************************************************* */

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		nb = -n;
		ft_putchar_fd('-', fd);
	}
	if (nb < 10)
		ft_putchar_fd(nb + '0', fd);
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd(nb % 10 + '0', fd);
	}
}
