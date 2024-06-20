/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:58:25 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/21 17:55:32 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Supprime et libère la mémoire allouée de tous les éléments d'une liste.
** Enfin, le pointeur de tête doit être mis à NULL.
**
** \param lst Pointeur vers le pointeur du premier élément de la liste.
** \param del La fonction pour supprimer le contenu de chaque élément.
** \return Aucun retour.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*be;
	t_list	*t;

	if (!del || !lst || !*lst)
		return ;
	t = *lst;
	while (t)
	{
		be = t->next;
		ft_lstdelone(t, del);
		t = be;
	}
	*lst = NULL;
}
