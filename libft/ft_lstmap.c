/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:04:03 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/22 11:40:24 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Itère sur chaque élément de la liste et applique la fonction `f`.
** Crée une nouvelle liste résultante avec les éléments modifiés.
**
** \param lst Pointeur vers le premier élément de la liste.
** \param f La fonction à appliquer sur chaque élément.
** \param del La fonction pour supprimer le contenu de chaque élément de la liste résultante en cas d'erreur.
** \return La nouvelle liste résultante, ou NULL en cas d'erreur.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*newlist;

	newlist = NULL;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, elem);
		lst = lst->next;
	}
	return (newlist);
}
