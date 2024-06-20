/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:50:16 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/21 14:52:18 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Compte le nombre d'éléments dans une liste.
**
** \param lst Pointeur vers le premier élément de la liste.
** \return Le nombre d'éléments dans la liste.
*/
int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	if (lst == NULL)
		return (size);
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
