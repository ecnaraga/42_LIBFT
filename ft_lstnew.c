/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <galambey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:20:47 by garance           #+#    #+#             */
/*   Updated: 2023/05/10 10:18:22 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*temp;

	temp = NULL;
	temp = malloc(sizeof(t_list));
	if (temp == NULL)
		return (NULL);
	temp -> content = content;
	temp -> next = NULL;
	return (temp);
}
