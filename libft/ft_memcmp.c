/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:19:12 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/12 09:00:08 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Compare les `n` premiers octets de la zone mémoire `s1` et `s2`.
**
** \param s1 Première zone mémoire à comparer.
** \param s2 Deuxième zone mémoire à comparer.
** \param n Nombre d'octets à comparer.
** \return Un entier inférieur, égal ou supérieur à zéro selon que `s1` est respectivement
**         plus petite, égale ou plus grande que `s2`.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
