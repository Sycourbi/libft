/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:30:43 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/14 17:07:35 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Affiche la chaîne de caractères `s` suivie d'un retour à la ligne sur le descripteur de fichier `fd`.
**
** \param s La chaîne de caractères à afficher.
** \param fd Le descripteur de fichier sur lequel afficher.
** \return Aucun retour.
*/
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
