/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:54:31 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/21 14:56:15 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Itère sur chaque élément de la liste et applique la fonction `f`.
**
** \param lst Pointeur vers le premier élément de la liste.
** \param f La fonction à appliquer sur chaque élément.
** \return Aucun retour.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
