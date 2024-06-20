/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:23:43 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/18 11:04:26 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Affiche la chaîne de caractères `s` sur le descripteur de fichier `fd`.
**
** \param s La chaîne de caractères à afficher.
** \param fd Le descripteur de fichier sur lequel afficher.
** \return Aucun retour.
*/
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
