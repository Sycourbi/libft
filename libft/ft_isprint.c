/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:14:22 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/07 13:42:23 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Vérifie si le caractère donné est imprimable, c'est-à-dire s'il est affichable.
**
** \param c Le caractère à tester.
** \return 1 si c'est un caractère imprimable, 0 sinon.
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
