/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:16:32 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/14 17:09:43 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Affiche le caractère `c` sur le descripteur de fichier `fd`.
**
** \param c Le caractère à afficher.
** \param fd Le descripteur de fichier sur lequel afficher.
** \return Aucun retour.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
