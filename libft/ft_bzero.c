/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:26:40 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/12 10:09:46 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Met à zéro les `n` premiers octets de la zone mémoire pointée par `s`.
**
** \param s Pointeur vers la zone mémoire à affecter.
** \param n Nombre d'octets à mettre à zéro.
** \return Aucun retour.
*/
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}	
}
